#-------------------------------------------------
#
# Project created by QtCreator 2014-12-14T16:53:48
#
#-------------------------------------------------

QT       += core gui

QT       += core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SkilThrju
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        comparer.cpp\
        computerrepository.cpp\
        computerservice.cpp\
        connection.cpp\
        connectrepository.cpp\
        connectservice.cpp\
        consoleui.cpp\
        scienceservice.cpp\
        scientist.cpp\
        scientistrepository.cpp\
        utilities.cpp\
        computer.cpp \
    addscientist.cpp \
    addcomputer.cpp \
    orderscientists.cpp\
    connect.cpp



HEADERS  += mainwindow.h\
            comparer.h\
            computer.h\
            computerrepository.h\
            computerservice.h\
            connection.h\
            connectrepository.h\
            connectservice.h\
            consoleui.h\
            menus.h\
            scienceservice.h\
            scientist.h\
            scientistrepository.h\
            utilities.h \
    addscientist.h \
    addcomputer.h \
    searchscientist.h\
    orderscientists.h \
    connect.h


FORMS    += mainwindow.ui \
    addscientist.ui \
    addcomputer.ui\ 
    searchscientist.ui\
    orderscientists.ui \
    connect.ui
