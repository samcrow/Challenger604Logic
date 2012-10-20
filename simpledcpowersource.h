#ifndef SIMPLEPOWERSOURCE_H
#define SIMPLEPOWERSOURCE_H

#include "powersource.h"

namespace Challenger604Systems {

/**
  Extends PowerSource with built-in fields for maximum, available, current, and requested power levels.
  This is useful for power sources that don't have to do complicated things with their power levels.
  All these functions are virtual, so you can override them.
  */
class SimplePowerSource : public PowerSource
{
    Q_OBJECT
public:
    explicit SimplePowerSource(QObject *parent = 0);

    virtual double getMaxPower();

    virtual double getAvailablePower();

    virtual double getCurrentPower();
    
signals:
    
public slots:

    virtual void requestPower(double inRequestedPower);
    
protected:

    /** The maximum power that this source can supply */
    double maxPower;
    /** The maximum power that this source can supply in its current state */
    double availablePower;
    /** The current power that this source is supplying */
    double currentPower;
    /** The power that is currently requested */
    double requestedPower;

};

}

#endif // SIMPLEPOWERSOURCE_H
