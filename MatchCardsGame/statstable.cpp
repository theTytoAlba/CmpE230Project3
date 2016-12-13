#include "statstable.h"
#include "ui_statstable.h"

StatsTable::StatsTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statstable)
{
    ui->setupUi(this);
    p1Time = 0;
    p2Time = 0;
    p1Score = 0;
    p2Score = 0;
    ui->P1Score->setText("0");
    ui->P2Score->setText("0");
    ui->P1Time->setText("0");
    ui->P2Time->setText("0");
}

void StatsTable::increaseScore(int playerNo) {
    if (playerNo == 1) {
        ui->P1Score->setText(QString::number(++p1Score));
    } else {
        ui->P2Score->setText(QString::number(++p2Score));
    }
    return;
}

void StatsTable::tickP1Time() {
    p1Time++;
    ui->P1Time->setText(QString::number(p1Time));
    return;
}

void StatsTable::tickP2Time() {
    p2Time++;
    ui->P2Time->setText(QString::number(p2Time));
    return;
}

StatsTable::~StatsTable()
{
    delete ui;
}
