#ifndef TESTDCPOWERSINK_H
#define TESTDCPOWERSINK_H

#include "../defs/simpledcpowersink.h"

namespace Challenger604Systems {

/**
  @brief A power sink that consumes 100 watts of power at 28 volts DC
  */
class CHALLENGER604LOGICSHARED_EXPORT TestDCPowerSink : public SimpleDCPowerSink
{
public:
    TestDCPowerSink(PowerSource * inSource);

    virtual double getTargetInputWattage();
};

}
#endif // TESTDCPOWERSINK_H
