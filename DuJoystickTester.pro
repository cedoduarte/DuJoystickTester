#-------------------------------------------------
#
# Project created by QtCreator 2015-06-14T10:59:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DuJoystickTester
TEMPLATE = app

INCLUDEPATH += $$PWD/3rdParty/SDL2-2.0.3/i686-w64-mingw32/include

LIBS += -L$$PWD/3rdParty/SDL2-2.0.3/i686-w64-mingw32/lib

LIBS += -lSDL2

DEFINES += SDL_MAIN_HANDLED

SOURCES += main.cpp\
        Widget.cpp \
    DuJoystickManager.cpp

HEADERS  += Widget.h \
    DuJoystickManager.h

FORMS    += Widget.ui

QMAKE_CXXFLAGS += -std=gnu++14
