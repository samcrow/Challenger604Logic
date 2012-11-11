#include "simpledcpowersource.h"

namespace Challenger604Systems {

SimpleDCPowerSource::SimpleDCPowerSource() :
    maxOutputWattage(0),
    availableOutputWattage(0),
    currentOutputWattage(0),
    requestedOutputPower(0),
    currentOutputVoltage(0)
{
}

double SimpleDCPowerSource::getMaxOutputWattage() {
    return maxOutputWattage;
}

double SimpleDCPowerSource::getAvailableOutputWattage() {
    return availableOutputWattage;
}

double SimpleDCPowerSource::getCurrentOutputWattage() {
    return currentOutputWattage;
}

double SimpleDCPowerSource::getCurrentOutputVoltage() {
    return currentOutputVoltage;
}

ElectricalPowerType SimpleDCPowerSource::getOutputPowerType() {
    return DC_28V;
}


void SimpleDCPowerSource::requestPower(double inRequestedPower) {
    requestedOutputPower = inRequestedPower;
}

}
