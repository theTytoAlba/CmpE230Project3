#ifndef CARDSTABLE_H
#define CARDSTABLE_H

#include <QWidget>
#include <QLabel>
#include <clickablelabel.h>
#include <QTimer>
#include <statstable.h>
#include <queue>

namespace Ui {
class CardsTable;
}

class CardsTable : public QWidget
{
    Q_OBJECT

public:
    explicit CardsTable(QWidget *parent = 0, int gameNo = 0, StatsTable *stats = 0);
    ~CardsTable();
    int gameNo;
    StatsTable *stats;
    void setCardsBelow(QPixmap *pixmapArray[30]);

private slots:
    void imageClicked(void);
    void timerTick();

private:
    Ui::CardsTable *ui;
    void initialize(void);
    void closeAllCards(void);
    ClickableLabel *cardsArray[30];
    QPixmap *cardsBelow[30];
    QTimer *timer;
    int turn;
    std::vector<int> openCards;
    std::vector<int> pairedCards;
};

#endif // CARDSTABLE_H
