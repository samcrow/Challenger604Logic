#include "tru.h"

namespace Challenger604Systems {

//Specify constants
const double TRU::efficiency = 0.85;

TRU::TRU(ACPowerSource *inSource) :
    SimpleACPowerSink(inSource),
    targetInputWattage(0)
{
    acSource = inSource;

    //Maximum rated output: 100 amps * 28 volts = 2800 watts
    maxOutputWattage = 2800;
}

//Slot received when something downstream asks for power
void TRU::requestPower(double inRequestedPower) {
    //Call the simple power source superclass function to set the field requestedPower to the requested amount
    SimpleDCPowerSource::requestPower(inRequestedPower);

    targetInputWattage = requestedOutputPower * (1 / efficiency);

    acSource->requestPower(targetInputWattage);

    //TODO: Warm-up stuff
    //Currently works immediately

    availableOutputWattage = inRequestedPower;
    currentOutputWattage = inRequestedPower;

    //TODO: Variable voltage
    currentOutputVoltage = 28;
}

double TRU::getTargetInputWattage() {
    return targetInputWattage;
}

}
