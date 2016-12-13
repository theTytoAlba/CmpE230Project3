#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statstable.h"
#include "cardstable.h"
#include <vector>
#include <sstream>
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initialize();
    connect(ui->NewGame, SIGNAL(pressed()), this, SLOT(newGame()));
    connect(ui->PrevResults, SIGNAL(pressed()), this, SLOT(prevGame()));
    connect(ui->NextResults, SIGNAL(pressed()), this, SLOT(nextGame()));
}

void MainWindow::initialize(void) {
    // initialize game stats
    StatsTable *stats = new StatsTable(ui->statsStackedWidget, ui->HighestScore);
    ui->statsStackedWidget->addWidget(stats);
    statsTableVector.push_back(stats);
    ui->statsStackedWidget->setCurrentWidget(statsTableVector.at(0));

    // initialize game no
    gameNo = 0;

    //upload images from memory
    for(int i = 0; i < 16; i++) {
        QPixmap *image = new QPixmap(QString(QCoreApplication::applicationDirPath() + "/icons/%1.jpg").arg(i));
        cardImages[i] = image;
    }
}

void MainWindow::newGame() {
    gameNo = cardsTableVector.size() + 1;

    // initialize new game stats if it is not the first game
    if (gameNo != 1) {
        StatsTable *stats = new StatsTable(ui->statsStackedWidget, ui->HighestScore);
        ui->statsStackedWidget->addWidget(stats);
        statsTableVector.push_back(stats);
        ui->statsStackedWidget->setCurrentWidget(statsTableVector.at(gameNo-1));
    }

    // initialize a new game
    CardsTable *cards = new CardsTable(ui->cardsStackedWidget, gameNo, statsTableVector.back());
    ui->cardsStackedWidget->addWidget(cards);
    cardsTableVector.push_back(cards);
    ui->cardsStackedWidget->setCurrentWidget(cardsTableVector.at(gameNo-1));

    // update game number
    ui->GameNo->setText(QString::number(gameNo));

    // set the below cards
    std::vector<QPixmap *> randomCards;
    for (int i = 1; i < 16; i++) {
        randomCards.push_back(cardImages[i]);
        randomCards.push_back(cardImages[i]);
    }
    QPixmap *randCardsToSend[30];
    for (int i = 0; i < 30; i++) {
        int index = rand() % randomCards.size();
        randCardsToSend[i] = randomCards.at(index);
        randomCards.erase(randomCards.begin() + index);
    }
    cards->setCardsBelow(randCardsToSend);
}

void MainWindow::prevGame() {
    //if there is no previous game, return.
    if (gameNo == 1) {
        return;
    }

    gameNo--;
    ui->GameNo->setText(QString::number(gameNo));
    ui->cardsStackedWidget->setCurrentWidget(cardsTableVector.at(gameNo-1));
    ui->statsStackedWidget->setCurrentWidget(statsTableVector.at(gameNo-1));
}

void MainWindow::nextGame() {
    //if there is no next game, return.
    if (gameNo == cardsTableVector.size()) {
        return;
    }

    gameNo++;
    ui->GameNo->setText(QString::number(gameNo));
    ui->cardsStackedWidget->setCurrentWidget(cardsTableVector.at(gameNo-1));
    ui->statsStackedWidget->setCurrentWidget(statsTableVector.at(gameNo-1));
}

MainWindow::~MainWindow()
{
    delete ui;
}
