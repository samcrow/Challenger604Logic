#include "simpledcpowersource.h"

namespace Challenger604Systems {

SimpleDCPowerSource::SimpleDCPowerSource(QObject *parent) :
    PowerSource(parent),
    maxWattage(0),
    availableWattage(0),
    currentWattage(0),
    requestedPower(0),
  currentVoltage(0)
{
}

double SimpleDCPowerSource::getMaxWattage() {
    return maxWattage;
}

double SimpleDCPowerSource::getAvailableWattage() {
    return availableWattage;
}

double SimpleDCPowerSource::getCurrentWattage() {
    return currentWattage;
}

double SimpleDCPowerSource::getCurrentVoltage() {
    return currentVoltage;
}

ElectricalPowerType SimpleDCPowerSource::getOutputPowerType() {
    return AC_115V_400HZ;
}


void SimpleDCPowerSource::requestPower(double inRequestedPower) {
    requestedPower = inRequestedPower;
}

}
