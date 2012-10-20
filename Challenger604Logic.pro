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
    electrical/components/apu.cpp \
    electrical/defs/powersource.cpp \
    electrical/defs/acpowersource.cpp \
    electrical/defs/simpleacpowersource.cpp \
    electrical/defs/simpledcpowersource.cpp \
    electrical/components/tru.cpp \
    electrical/defs/powersink.cpp \
    electrical/defs/simpleacpowersink.cpp \
    electrical/defs/simpledcpowersink.cpp \
    electrical/components/endlessacpowersource.cpp \
    electrical/components/testdcpowersink.cpp

HEADERS +=\
        Challenger604Logic_global.h \
    electrical/components/apu.h \
    electrical/defs/powersource.h \
    electrical/defs/electricalpowertype.h \
    electrical/defs/acpowersource.h \
    electrical/defs/simpleacpowersource.h \
    electrical/defs/simpledcpowersource.h \
    electrical/components/tru.h \
    electrical/defs/powersink.h \
    electrical/defs/simpleacpowersink.h \
    electrical/defs/simpledcpowersink.h \
    electrical/components/endlessacpowersource.h \
    electrical/components/testdcpowersink.h

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
