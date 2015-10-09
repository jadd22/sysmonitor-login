#-------------------------------------------------
#
# Project created by QtCreator 2015-10-09T23:15:16
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sys_monitor
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    demoapp.cpp \
    signupwindow.cpp

HEADERS  +=\
                login.h \
    demoapp.h \
    signupwindow.h


FORMS    += login.ui \
    demoapp.ui \
    signupwindow.ui
