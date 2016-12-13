#-------------------------------------------------
#
# Project created by QtCreator 2016-12-10T17:38:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MatchCardsGame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    statstable.cpp \
    cardstable.cpp \
    clickablelabel.cpp

HEADERS  += mainwindow.h \
    statstable.h \
    cardstable.h \
    clickablelabel.h

FORMS    += mainwindow.ui \
    statstable.ui \
    cardstable.ui

