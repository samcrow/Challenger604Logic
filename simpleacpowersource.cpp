#include "simpleacpowersource.h"

namespace Challenger604Systems {

SimpleACPowerSource::SimpleACPowerSource(QObject *parent) :
    ACPowerSource(parent),
    maxWattage(0),
    availableWattage(0),
    currentWattage(0),
    requestedPower(0),
    currentVoltage(0),
    currentFrequency(0)
{
}

double SimpleACPowerSource::getMaxWattage() {
    return maxWattage;
}

double SimpleACPowerSource::getAvailableWattage() {
    return availableWattage;
}

double SimpleACPowerSource::getCurrentWattage() {
    return currentWattage;
}

double SimpleACPowerSource::getCurrentVoltage() {
    return currentVoltage;
}

double SimpleACPowerSource::getCurrentFrequency() {
    return currentFrequency;
}

ElectricalPowerType SimpleACPowerSource::getPowerType() {
    return DC_28V;
}


void SimpleACPowerSource::requestPower(double inRequestedPower) {
    requestedPower = inRequestedPower;
}

}
