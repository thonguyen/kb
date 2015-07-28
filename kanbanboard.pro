#-------------------------------------------------
#
# Project created by QtCreator 2015-07-28T13:20:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kanbanboard
TEMPLATE = app


SOURCES += main.cpp\
        board.cpp \
    column.cpp \
    card.cpp

HEADERS  += board.h \
    column.h \
    card.h
