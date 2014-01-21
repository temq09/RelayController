#-------------------------------------------------
#
# Project created by QtCreator 2014-01-20T14:27:17
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RelayController
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    server.cpp \
    modernpushbutton.cpp

HEADERS  += mainwindow.h \
    server.h \
    modernpushbutton.h

FORMS    += mainwindow.ui
