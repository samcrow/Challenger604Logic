#include "simpleacpowersink.h"

namespace Challenger604Systems {

SimpleACPowerSink::SimpleACPowerSink(PowerSource * inSource) :
    PowerSink(inSource)
{
}

ElectricalPowerType SimpleACPowerSink::getInputPowerType() {
    return AC_115V_400HZ;
}

}
