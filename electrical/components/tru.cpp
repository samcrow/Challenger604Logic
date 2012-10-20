#include "tru.h"

namespace Challenger604Systems {

//Specify constants
const double TRU::efficiency = 0.85;

TRU::TRU(ACPowerSource *inSource, QObject *parent) :
    SimpleDCPowerSource(parent),
    SimpleACPowerSink(inSource)
{
    acSource = inSource;
}

//Slot received when something downstream asks for power
void TRU::requestPower(double inRequestedPower) {
    //Call the simple power source superclass function to set the field requestedPower to the requested amount
    SimpleDCPowerSource::requestPower(inRequestedPower);

    acSource->requestPower(requestedPower * (1 / efficiency));
}

}
