# -------------------------------------------------
# Project created by QtCreator 2011-07-05T10:48:02
# -------------------------------------------------
QT += core \
    gui widgets svg

CONFIG += debug c++17

MOC_DIR = tmp/moc
OBJECTS_DIR = tmp/obj
RCC_DIR = tmp/rcc

DESTDIR = app
TARGET = labo6_gui
TEMPLATE = app
RESOURCES += $$PWD/labo6.qrc
INCLUDEPATH += $$PWD/src
    
SOURCES += \
    $$PWD/src/main.cpp \
    $$PWD/src/mainwindow.cpp \
    $$PWD/src/simview.cpp \
    $$PWD/src/guiinterface.cpp \
    $$PWD/src/arrowitem.cpp

HEADERS += \
    $$PWD/src/mainwindow.h \
    $$PWD/src/simview.h \
    $$PWD/src/connect.h \
    $$PWD/src/guiinterface.h \
    $$PWD/src/messages.h \
    $$PWD/src/arrowitem.h

SOURCES += \
    $$PWD/src/computeenginegui.cpp \
    $$PWD/src/computeenvironmentgui.cpp

HEADERS += \
    $$PWD/src/computeenginegui.h \
    $$PWD/src/computeenvironmentgui.h
