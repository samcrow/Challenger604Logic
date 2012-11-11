#ifndef SIMPLEPOWERSOURCE_H
#define SIMPLEPOWERSOURCE_H

#include "../../Challenger604Logic_global.h"
#include "powersource.h"

namespace Challenger604Systems {

/**
  Extends PowerSource with built-in fields for maximum, available, current, and requested power levels as well as voltage.
  This is useful for power sources that don't have to do complicated things with their power levels.
  This supplies DC electricity at nominal 28 volts.
  All these functions are virtual, so you can override them.
  */
class CHALLENGER604LOGICSHARED_EXPORT SimpleDCPowerSource : public PowerSource
{
public:
    SimpleDCPowerSource();

    virtual double getMaxOutputWattage();

    virtual double getAvailableOutputWattage();

    virtual double getCurrentOutputWattage();

    virtual double getCurrentOutputVoltage();

    virtual ElectricalPowerType getOutputPowerType();

    virtual void requestPower(double inRequestedPower);

protected:

    /** The maximum power that this source can supply */
    double maxOutputWattage;
    /** The maximum power that this source can supply in its current state */
    double availableOutputWattage;
    /** The current power that this source is supplying */
    double currentOutputWattage;
    /** The power that is currently requested */
    double requestedOutputPower;
    /** The voltage that is currently being supplied */
    double currentOutputVoltage;

};

}

#endif // SIMPLEPOWERSOURCE_H
