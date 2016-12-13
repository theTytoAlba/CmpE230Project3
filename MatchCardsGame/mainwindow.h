#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <statstable.h>
#include <cardstable.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newGame();

private:
    Ui::MainWindow *ui;
    int gameNo;
    void initialize(void);
    QPixmap *cardImages[17];
    std::vector<StatsTable *> statsTableVector;
    std::vector<CardsTable *> cardsTableVector;
};

#endif // MAINWINDOW_H
