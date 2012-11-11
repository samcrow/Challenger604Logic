#include "endlessacpowersource.h"

namespace Challenger604Systems {

EndlessACPowerSource::EndlessACPowerSource()
{
    const double maxDoubleValue = 1.7976931348623157E308;
    maxWattage = maxDoubleValue;

    currentFrequency = 400;
    currentVoltage = 115;
}

void EndlessACPowerSource::requestPower(double inRequestedPower) {
    SimpleACPowerSource::requestPower(inRequestedPower);

    availableWattage = requestedPower;
    currentWattage = requestedPower;
}

}
