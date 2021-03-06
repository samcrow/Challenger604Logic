#ifndef TRU_H
#define TRU_H

#include "../../Challenger604Logic_global.h"

#include "../defs/simpledcpowersource.h"
#include "../defs/acpowersource.h"
#include "../defs/simpleacpowersink.h"

namespace Challenger604Systems {

/**
  @brief Simulates a Transformer-Rectifier Unit
  This converts AC into DC.
  Currently, the imperfect efficiency of this device is simulated by removing a portion of the power that passes through it.
  */
class CHALLENGER604LOGICSHARED_EXPORT TRU : public SimpleDCPowerSource, public SimpleACPowerSink
{
public:
    /**
      Constructor
      @param inSource The power source that this device receives power from
      */
    TRU(ACPowerSource * inSource);

    /**
      The ratio of efficiency of a TRU. 1 is perfectly efficient, 0 means that it converts all its input energy into heat
      (and will result in a divide-by-zero error).
      */
    static const double efficiency;

    //from PowerSink
    double getTargetInputWattage();

    //Implements from PowerSource
    virtual void requestPower(double inRequestedPower);

protected:

    /**
      The source that supplies AC power to this TRU
      */
    ACPowerSource * acSource;

    /**
      The power in watts that this device wants to consume
      */
    double targetInputWattage;

};

}
#endif // TRU_H
