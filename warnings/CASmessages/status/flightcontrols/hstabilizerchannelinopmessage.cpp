#include "hstabilizerchannelinopmessage.h"


namespace Challenger604Systems {
namespace CAS {

HStabilizerChannelInopMessage::HStabilizerChannelInopMessage(quint8 channel, QObject *parent) :
    CASStatusMessage(parent),
    channelNumber(channel)
{
}

QString HStabilizerChannelInopMessage::getDisplayText() {
    return QString("STAB CH ") + channelNumber + " INOP";
}

}
}
