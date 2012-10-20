#ifndef SIMPLEACPOWERSOURCE_H
#define SIMPLEACPOWERSOURCE_H

#include "Challenger604Logic_global.h"
#include "acpowersource.h"

namespace Challenger604Systems {

/**
  Extends PowerSource with built-in fields for maximum, available, current, and requested power levels as well as voltage and AC frequency.
  This is useful for power sources that don't have to do complicated things with their power levels.
  This supplies AC electricity at nominal 115 volts/400 hertz.
  All these functions are virtual, so you can override them.
  */
class CHALLENGER604LOGICSHARED_EXPORT SimpleACPowerSource : public ACPowerSource
{
    Q_OBJECT
public:
    explicit SimpleACPowerSource(QObject *parent = 0);

    virtual double getMaxWattage();

    virtual double getAvailableWattage();

    virtual double getCurrentWattage();

    virtual double getCurrentVoltage();

    virtual double getCurrentFrequency();

    virtual ElectricalPowerType getPowerType();

signals:

public slots:

    virtual void requestPower(double inRequestedPower);

protected:

    /** The maximum power that this source can supply */
    double maxWattage;
    /** The maximum power that this source can supply in its current state */
    double availableWattage;
    /** The current power that this source is supplying */
    double currentWattage;
    /** The power that is currently requested */
    double requestedPower;
    /** The voltage that is currently being supplied */
    double currentVoltage;
    /** The frequency of the electricity that is currently being supplied */
    double currentFrequency;
};

}

#endif // SIMPLEACPOWERSOURCE_H
