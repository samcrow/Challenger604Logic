#ifndef POWERSOURCE_H
#define POWERSOURCE_H

#include <QObject>
#include "Challenger604Logic_global.h"
#include "electricalpowertype.h"

/**
  @namespace Challenger604Systems
  @brief This namespace contains everything in this project.
  */
namespace Challenger604Systems {

/**
  An abstract (should be used abstractly, but technically can be used directly) class for something that can provide power to the electrical system
  */
class CHALLENGER604LOGICSHARED_EXPORT PowerSource : public QObject
{
    Q_OBJECT
public:
    explicit PowerSource(QObject *parent = 0);

    /**
      Get the maximum power, in watts, that this source
      can provide in any situation.
      */
    virtual double getMaxWattage() = 0;

    /**
      Get the maximum power, in watts, that this source
      can provide in its current state.
      You may ask this device to change its state to supply more
      power than this by requesting a power level that is greater
      than this but less than the maximum power.
      */
    virtual double getAvailableWattage() = 0;

    /**
      Get the current power, in watts, that this source
      is providing. This may be less than the maximum power.
      */
    virtual double getCurrentWattage() = 0;

    /**
      Get the voltage, in volts, of the electricity that
      this source is providing.
      */
    virtual double getCurrentVoltage() = 0;

    /**
      Get the type of power that this source provides
      */
    virtual ElectricalPowerType getPowerType() = 0;
    
signals:
    
public slots:

    /**
      Ask this power source to provide power
      @param inRequestedPower The power, in watts, that this power source
      is requested to supply. If this is greater than the maximum power
      level, the source will supply its maximum power level.

      The source may not immediately make the requested power level
      available. It may take some time to "warm up".
      */
    virtual void requestPower(double inRequestedPower) = 0;

protected:

    
};

}

#endif // POWERSOURCE_H
