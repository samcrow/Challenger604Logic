#-------------------------------------------------
#
# Project created by QtCreator 2012-10-19T19:07:19
#
#-------------------------------------------------

QT       -= gui

TARGET = Challenger604Logic
TEMPLATE = lib

DEFINES += CHALLENGER604LOGIC_LIBRARY

SOURCES += \
    apu.cpp \
    powersource.cpp \
    simplepowersource.cpp

HEADERS +=\
        Challenger604Logic_global.h \
    apu.h \
    powersource.h \
    simplepowersource.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE1817D5F
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = Challenger604Logic.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
