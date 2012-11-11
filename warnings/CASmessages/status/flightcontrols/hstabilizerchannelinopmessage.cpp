#include "hstabilizerchannelinopmessage.h"

#include <sstream>

namespace Challenger604Systems {
namespace CAS {

HStabilizerChannelInopMessage::HStabilizerChannelInopMessage(uint8_t channel) :
    channelNumber(channel)
{
}

string HStabilizerChannelInopMessage::getDisplayText() {
    stringstream stream;

    stream << "STAB CH " << channelNumber << " INOP";
    return stream.str();
}

}
}
