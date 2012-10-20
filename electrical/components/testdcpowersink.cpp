#include "testdcpowersink.h"

namespace Challenger604Systems {

TestDCPowerSink::TestDCPowerSink(PowerSource *inSource) :
    SimpleDCPowerSink(inSource)
{
    source->requestPower(100);
}

double TestDCPowerSink::getTargetInputWattage() {
    return 100;
}

}
