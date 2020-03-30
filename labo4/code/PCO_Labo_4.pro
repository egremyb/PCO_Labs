QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

LIBS += -lpcosynchro

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
#DEFINES += __USE_STD_THREADS__

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        cablecarbehavior.cpp \
        main.cpp \
        pcocablecar.cpp \
        skierbehavior.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    cablecar.h \
    cablecarbehavior.h \
    cablecarinterface.h \
    cablecarskierinterface.h \
    launchable.h \
    pcocablecar.h \
    skierbehavior.h
