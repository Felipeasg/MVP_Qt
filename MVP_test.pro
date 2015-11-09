#-------------------------------------------------
#
# Project created by QtCreator 2015-11-08T14:48:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MVP_test
TEMPLATE = app


SOURCES += main.cpp\
        VIEW/mainwindow.cpp \
    PRESENTER/mainpresenter.cpp \
    MODEL/mainmodel.cpp \
    PRESENTER/mainactionlistener.cpp \
    MODEL/test.cpp

HEADERS  += VIEW/mainwindow.h \
    VIEW/imainview.h \
    PRESENTER/iactionlistener.h \
    PRESENTER/mainpresenter.h \
    MODEL/mainmodel.h \
    PRESENTER/mainactionlistener.h \
    MODEL/test.h

FORMS    += VIEW/mainwindow.ui
