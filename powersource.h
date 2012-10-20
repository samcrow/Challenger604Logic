#ifndef POWERSOURCE_H
#define POWERSOURCE_H

#include <QObject>

namespace Challenger604Systems {

/**
  An abstract (should be used abstractly, but technically can be used directly) class for something that can provide power to the electrical system
  */
class PowerSource : public QObject
{
    Q_OBJECT
public:
    explicit PowerSource(QObject *parent = 0);

    /**
      Get the maximum power, in watts, that this source
      can provide in any situation.
      */
    virtual double getMaxPower() = 0;

    /**
      Get the maximum power, in watts, that this source
      can provide in its current state.
      You may ask this device to change its state to supply more
      power than this by requesting a power level that is greater
      than this but less than the maximum power.
      */
    virtual double getAvailablePower() = 0;

    /**
      Get the current power, in watts, that this source
      is providing. This may be less than the maximum power.
      */
    virtual double getCurrentPower() = 0;
    
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
