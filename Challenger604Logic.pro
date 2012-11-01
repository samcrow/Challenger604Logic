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
    electrical/components/testdcpowersink.cpp \
    fuel/fuelsink.cpp \
    warnings/casmessage.cpp \
    warnings/aural/auralwarningsystem.cpp \
    warnings/caswarningmessage.cpp \
    warnings/cascautionmessage.cpp \
    warnings/casadvisorymessage.cpp \
    warnings/casstatusmessage.cpp \
    util/color.cpp \
    warnings/casmessagehandler.cpp \
    warnings/eicasmessage.cpp \
    warnings/CASmessages/caution/flightcontrols/groundspoilersdeployedmessage.cpp \
    warnings/CASmessages/caution/flightcontrols/elevatorsplitmessage.cpp \
    warnings/CASmessages/status/flightcontrols/hstabilizerchannelinopmessage.cpp \
    warnings/CASmessages/warning/autoflight/takeoffautopilotengagedmessage.cpp \
    warnings/CASmessages/warning/flightcontrols/takeoffflapsmessage.cpp \
    warnings/CASmessages/caution/flightcontrols/stabtrimfailmessage.cpp \
    warnings/CASmessages/warning/flightcontrols/strimconfigmessage.cpp \
    warnings/CASmessages/warning/flightcontrols/strimrunawaymessage.cpp \
    warnings/CASmessages/status/flightcontrols/flapsmotoroverheatmessage.cpp \
    warnings/CASmessages/caution/flightcontrols/flapsfailmessage.cpp \
    warnings/CASmessages/warning/flightcontrols/takeoffspoilersmessage.cpp

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
    electrical/components/testdcpowersink.h \
    fuel/fuelsink.h \
    warnings/casmessage.h \
    warnings/aural/auralwarningsystem.h \
    warnings/caswarningmessage.h \
    warnings/cascautionmessage.h \
    warnings/casadvisorymessage.h \
    warnings/casstatusmessage.h \
    warnings/CASmessages/caution/flightcontrols/groundspoilersdeployedmessage.h \
    warnings/CASmessages/caution/flightcontrols/elevatorsplitmessage.h \
    warnings/CASmessages/status/flightcontrols/hstabilizerchannelinopmessage.h \
    warnings/CASmessages/warning/autoflight/takeoffautopilotengagedmessage.h \
    warnings/CASmessages/warning/flightcontrols/takeoffflapsmessage.h \
    util/color.h \
    warnings/casmessagehandler.h \
    warnings/eicasmessage.h \
    warnings/CASmessages/caution/flightcontrols/stabtrimfailmessage.h \
    warnings/CASmessages/warning/flightcontrols/strimconfigmessage.h \
    warnings/CASmessages/warning/flightcontrols/strimrunawaymessage.h \
    warnings/CASmessages/status/flightcontrols/flapsmotoroverheatmessage.h \
    warnings/CASmessages/caution/flightcontrols/flapsfailmessage.h \
    warnings/CASmessages/warning/flightcontrols/takeoffspoilersmessage.h


unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
