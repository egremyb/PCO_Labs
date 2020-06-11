
CONFIG += c++17
CONFIG += console
CONFIG -= app_bundle
QT -= gui

unix {
    LIBS += -lpthread
}

LIBS += -lgtest
LIBS += -lpcosynchro

include(../sources.pri)

SOURCES += \
    src/main.cpp

HEADERS += \
    src/pcotest.h \
    src/testcomputengine.h
