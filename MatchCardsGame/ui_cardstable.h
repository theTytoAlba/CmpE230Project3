/********************************************************************************
** Form generated from reading UI file 'cardstable.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDSTABLE_H
#define UI_CARDSTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CardsTable
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *CardsGrid;

    void setupUi(QWidget *CardsTable)
    {
        if (CardsTable->objectName().isEmpty())
            CardsTable->setObjectName(QStringLiteral("CardsTable"));
        CardsTable->resize(765, 400);
        gridLayoutWidget = new QWidget(CardsTable);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 761, 401));
        CardsGrid = new QGridLayout(gridLayoutWidget);
        CardsGrid->setObjectName(QStringLiteral("CardsGrid"));
        CardsGrid->setContentsMargins(0, 0, 0, 0);

        retranslateUi(CardsTable);

        QMetaObject::connectSlotsByName(CardsTable);
    } // setupUi

    void retranslateUi(QWidget *CardsTable)
    {
        CardsTable->setWindowTitle(QApplication::translate("CardsTable", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class CardsTable: public Ui_CardsTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDSTABLE_H
