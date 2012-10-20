#include "simpledcpowersink.h"

namespace Challenger604Systems {

SimpleDCPowerSink::SimpleDCPowerSink(PowerSource *inSource) :
    PowerSink(inSource)
{
    Q_ASSERT_X(inSource->getOutputPowerType() == DC_28V, "DC source check", "The source of a DC power sink must supply DC power");
}

ElectricalPowerType SimpleDCPowerSink::getInputPowerType() {
    return DC_28V;
}

}
