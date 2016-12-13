#ifndef STATSTABLE_H
#define STATSTABLE_H

#include <QWidget>
#include <QTextBrowser>

namespace Ui {
class statstable;
}

class StatsTable : public QWidget
{
    Q_OBJECT

public:
    explicit StatsTable(QWidget *parent = 0, QTextBrowser *highestScore = 0);
    void increaseScore(int playerNo);
    void tickP1Time();
    void tickP2Time();
    ~StatsTable();

private:
    int p1Time, p2Time, p1Score, p2Score;
    QTextBrowser *highestScore;
    Ui::statstable *ui;
};

#endif // STATSTABLE_H
