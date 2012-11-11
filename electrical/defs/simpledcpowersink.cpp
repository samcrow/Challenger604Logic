#include "simpledcpowersink.h"

namespace Challenger604Systems {

SimpleDCPowerSink::SimpleDCPowerSink(PowerSource *inSource) :
    PowerSink(inSource)
{

}

ElectricalPowerType SimpleDCPowerSink::getInputPowerType() {
    return DC_28V;
}

}
