#ifndef POWERSINK_H
#define POWERSINK_H

#include <QObject>
#include "electricalpowertype.h"
#include "powersource.h"

namespace Challenger604Systems {

/**
  @brief Abstract base class for anything that accepts electricity from something else
  */
class PowerSink
{

public:

    /**
      Constructor specifying a power source that this sink receives power from
      @param inSource The power source that this sink will get power from
      */
    PowerSink(PowerSource * inSource);

    /**
      Get the power, in watts, that this device is currently consuming
      */
    virtual double getCurrentInputWattage();

    /**
      Get the power, in watts, that this device is currently attempting to consume.
      If the sources can't provide enough power, this will be less than the current wattage.
      */
    virtual double getTargetInputWattage() = 0;

    /**
      Get the type of power that this device consumes
      */
    virtual ElectricalPowerType getInputPowerType() = 0;


protected:

    /**
      The source that supplies power to this sink
      */
    PowerSource * source;
    
};

}

#endif // POWERSINK_H
