#include "simplepowersource.h"

namespace Challenger604Systems {

SimplePowerSource::SimplePowerSource(QObject *parent) :
    PowerSource(parent),
    maxPower(0),
    availablePower(0),
    currentPower(0)
{
}

double SimplePowerSource::getMaxPower() {
    return maxPower;
}

double SimplePowerSource::getAvailablePower() {
    return availablePower;
}

double SimplePowerSource::getCurrentPower() {
    return currentPower;
}

void SimplePowerSource::requestPower(double inRequestedPower) {
    requestedPower = inRequestedPower;
}

}
