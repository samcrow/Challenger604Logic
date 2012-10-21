#ifndef SIMPLEACPOWERSINK_H
#define SIMPLEACPOWERSINK_H

#include "powersink.h"

namespace Challenger604Systems {

/**
  A power sink that takes standard AC power
  */
class CHALLENGER604LOGICSHARED_EXPORT SimpleACPowerSink : public PowerSink
{

public:
    SimpleACPowerSink(PowerSource * inSource);

    virtual ElectricalPowerType getInputPowerType();
    
};

}
#endif // SIMPLEACPOWERSINK_H
