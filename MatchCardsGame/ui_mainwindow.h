/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *Player1Text;
    QTextBrowser *Player2Text;
    QTextBrowser *ScoreText;
    QTextBrowser *TimeText;
    QTextBrowser *HighestScoreText;
    QTextBrowser *GameNoText;
    QTextBrowser *GameNo;
    QTextBrowser *HighestScore;
    QStackedWidget *statsStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QStackedWidget *cardsStackedWidget;
    QWidget *page_3;
    QWidget *page_4;
    QPushButton *NewGame;
    QPushButton *NextResults;
    QPushButton *PrevResults;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Player1Text = new QTextBrowser(centralWidget);
        Player1Text->setObjectName(QStringLiteral("Player1Text"));
        Player1Text->setGeometry(QRect(120, 40, 100, 30));
        Player2Text = new QTextBrowser(centralWidget);
        Player2Text->setObjectName(QStringLiteral("Player2Text"));
        Player2Text->setGeometry(QRect(220, 40, 100, 30));
        ScoreText = new QTextBrowser(centralWidget);
        ScoreText->setObjectName(QStringLiteral("ScoreText"));
        ScoreText->setGeometry(QRect(20, 70, 100, 30));
        TimeText = new QTextBrowser(centralWidget);
        TimeText->setObjectName(QStringLiteral("TimeText"));
        TimeText->setGeometry(QRect(20, 100, 100, 30));
        HighestScoreText = new QTextBrowser(centralWidget);
        HighestScoreText->setObjectName(QStringLiteral("HighestScoreText"));
        HighestScoreText->setGeometry(QRect(550, 100, 150, 30));
        GameNoText = new QTextBrowser(centralWidget);
        GameNoText->setObjectName(QStringLiteral("GameNoText"));
        GameNoText->setGeometry(QRect(550, 70, 150, 30));
        GameNo = new QTextBrowser(centralWidget);
        GameNo->setObjectName(QStringLiteral("GameNo"));
        GameNo->setGeometry(QRect(700, 70, 50, 30));
        HighestScore = new QTextBrowser(centralWidget);
        HighestScore->setObjectName(QStringLiteral("HighestScore"));
        HighestScore->setGeometry(QRect(700, 100, 50, 30));
        statsStackedWidget = new QStackedWidget(centralWidget);
        statsStackedWidget->setObjectName(QStringLiteral("statsStackedWidget"));
        statsStackedWidget->setGeometry(QRect(120, 70, 200, 60));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        statsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        statsStackedWidget->addWidget(page_2);
        cardsStackedWidget = new QStackedWidget(centralWidget);
        cardsStackedWidget->setObjectName(QStringLiteral("cardsStackedWidget"));
        cardsStackedWidget->setGeometry(QRect(20, 150, 765, 400));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        cardsStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        cardsStackedWidget->addWidget(page_4);
        NewGame = new QPushButton(centralWidget);
        NewGame->setObjectName(QStringLiteral("NewGame"));
        NewGame->setGeometry(QRect(550, 40, 100, 30));
        NextResults = new QPushButton(centralWidget);
        NextResults->setObjectName(QStringLiteral("NextResults"));
        NextResults->setGeometry(QRect(650, 40, 100, 30));
        PrevResults = new QPushButton(centralWidget);
        PrevResults->setObjectName(QStringLiteral("PrevResults"));
        PrevResults->setGeometry(QRect(450, 40, 100, 30));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Player1Text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">Player 1</span></p></body></html>", 0));
        Player2Text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">Player 2</span></p></body></html>", 0));
        ScoreText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">Score:</span></p></body></html>", 0));
        TimeText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">Time:</span></p></body></html>", 0));
        HighestScoreText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">Highest Score:</span></p></body></html>", 0));
        GameNoText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">Game No:</span></p></body></html>", 0));
        GameNo->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">0</span></p></body></html>", 0));
        HighestScore->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00007f;\">0</span></p></body></html>", 0));
        NewGame->setText(QApplication::translate("MainWindow", "New Game", 0));
        NextResults->setText(QApplication::translate("MainWindow", "Next Results", 0));
        PrevResults->setText(QApplication::translate("MainWindow", "Prev Results", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
