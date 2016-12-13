#include "cardstable.h"
#include "ui_cardstable.h"
#include "clickablelabel.h"
#include <QLabel>
#include <vector>
#include <mainwindow.h>

CardsTable::CardsTable(QWidget *parent, int gameNo, StatsTable *stats) :
    QWidget(parent),
    ui(new Ui::CardsTable)
{
    ui->setupUi(this);
    this->gameNo = gameNo;
    this->stats = stats;
    initialize();
}

void CardsTable::initialize() {
    QPixmap questionMark(QCoreApplication::applicationDirPath() + "/icons/0.jpg");

    // fill visible images with question marks
    for (int row = 0; row < 5; row++) {
        for (int column = 0; column < 6; column++) {
            ClickableLabel *image = new ClickableLabel(questionMark);
            connect(image, SIGNAL(clicked()), this, SLOT(imageClicked()));
            cardsArray[row*6 + column] = image;
            ui->CardsGrid->addWidget(image, row, column);
        }
    }

    // set turn to p1
    turn = 1;

    // start timer
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerTick()));
    timer->start(1000);
}

void CardsTable::timerTick() {
    // tick the clock
    if (turn == 1) {
        stats->tickP1Time();
    } else {
        stats->tickP2Time();
    }
}

void CardsTable::setCardsBelow(QPixmap *array[30]) {
    for (int i = 0; i < 30; i++) {
        cardsBelow[i] = array[i];
    }
}

void CardsTable::closeAllCards() {
    for (int i = 0; i < openCards.size(); i++) {
        QPixmap questionMark(QCoreApplication::applicationDirPath() + "/icons/0.jpg");
        cardsArray[openCards.at(i)]->setPixmap(questionMark);
    }

    openCards.clear();
}

void CardsTable::imageClicked() {
    QPixmap empty(QCoreApplication::applicationDirPath() + "/icons/end.jpg");
    QObject *obj = sender();
    // if user has already have 2 cards open, close them to open a new one.
    if (openCards.size() > 1) {
        closeAllCards();
    }

    for (int i = 0; i < 30; i++) {
        if (cardsArray[i] == obj) {
            // do nothing if it is already paired
            for (int j = 0; j < pairedCards.size(); j++) {
                if (pairedCards.at(j) == i) {
                    return;
                }
            }

            // do nothing if its already open
            for (int j = 0; j < openCards.size(); j++) {
                if (openCards.at(j) == i) {
                    return;
                }
            }

            // open clicked card
            openCards.push_back(i);
            cardsArray[i]->setPixmap(*cardsBelow[i]);

            // check if a pair is opened
            for (int j = 0; j < openCards.size(); j++) {
                if (cardsBelow[i] == cardsBelow[openCards.at(j)] && i != openCards.at(j)) {
                    // remove the pair from table.
                    cardsArray[i]->setPixmap(empty);
                    cardsArray[openCards.at(j)]->setPixmap(empty);
                    // add them to the paired list
                    pairedCards.push_back(i);
                    pairedCards.push_back(openCards.at(j));
                    // erase last clicked card and its pair
                    openCards.erase(openCards.begin() + openCards.size() - 1);
                    openCards.erase(openCards.begin() + j);
                    // add the score to the player
                    stats->increaseScore(turn);
                    // stop the timer if its the last pair
                    if (pairedCards.size() == 30) {
                        timer->stop();
                    }
                    return;
                }
            }

            // if 2 cards are open and no pair is found, pass the turn to the other player {1, 2}.
            if (openCards.size() == 2) {
                turn = 3-turn;
            }
        }
    }
}

CardsTable::~CardsTable()
{
    delete ui;
}
