/********************************************************************************
** Form generated from reading UI file 'statstable.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSTABLE_H
#define UI_STATSTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statstable
{
public:
    QTextBrowser *P1Score;
    QTextBrowser *P2Time;
    QTextBrowser *P2Score;
    QTextBrowser *P1Time;

    void setupUi(QWidget *statstable)
    {
        if (statstable->objectName().isEmpty())
            statstable->setObjectName(QStringLiteral("statstable"));
        statstable->resize(200, 60);
        P1Score = new QTextBrowser(statstable);
        P1Score->setObjectName(QStringLiteral("P1Score"));
        P1Score->setGeometry(QRect(0, 0, 100, 30));
        P2Time = new QTextBrowser(statstable);
        P2Time->setObjectName(QStringLiteral("P2Time"));
        P2Time->setGeometry(QRect(100, 30, 100, 30));
        P2Score = new QTextBrowser(statstable);
        P2Score->setObjectName(QStringLiteral("P2Score"));
        P2Score->setGeometry(QRect(100, 0, 100, 30));
        P1Time = new QTextBrowser(statstable);
        P1Time->setObjectName(QStringLiteral("P1Time"));
        P1Time->setGeometry(QRect(0, 30, 100, 30));

        retranslateUi(statstable);

        QMetaObject::connectSlotsByName(statstable);
    } // setupUi

    void retranslateUi(QWidget *statstable)
    {
        statstable->setWindowTitle(QApplication::translate("statstable", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class statstable: public Ui_statstable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSTABLE_H
