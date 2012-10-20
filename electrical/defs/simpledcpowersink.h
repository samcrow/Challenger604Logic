#ifndef SIMPLEDCPOWERSINK_H
#define SIMPLEDCPOWERSINK_H

#include "powersink.h"
#include "powersource.h"

namespace Challenger604Systems {

/**
  @brief A power sink that accepts DC power
  */
class SimpleDCPowerSink : public PowerSink
{
public:
    /**
      Constructor
      @param inSource The source that supplies power to this sink. This source must nominally supply DC 28v.
      */
    SimpleDCPowerSink(PowerSource * inSource);

    virtual ElectricalPowerType getInputPowerType();
    
};

}
#endif // SIMPLEDCPOWERSINK_H
