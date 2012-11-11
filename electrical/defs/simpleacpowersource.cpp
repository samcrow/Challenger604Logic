#include "simpleacpowersource.h"

namespace Challenger604Systems {

SimpleACPowerSource::SimpleACPowerSource() :
    maxWattage(0),
    availableWattage(0),
    currentWattage(0),
    requestedPower(0),
    currentVoltage(0),
    currentFrequency(0)
{
}

double SimpleACPowerSource::getMaxOutputWattage() {
    return maxWattage;
}

double SimpleACPowerSource::getAvailableOutputWattage() {
    return availableWattage;
}

double SimpleACPowerSource::getCurrentOutputWattage() {
    return currentWattage;
}

double SimpleACPowerSource::getCurrentOutputVoltage() {
    return currentVoltage;
}

double SimpleACPowerSource::getCurrentFrequency() {
    return currentFrequency;
}

ElectricalPowerType SimpleACPowerSource::getOutputPowerType() {
    return DC_28V;
}


void SimpleACPowerSource::requestPower(double inRequestedPower) {
    requestedPower = inRequestedPower;
}

}
