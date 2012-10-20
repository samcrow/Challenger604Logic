#include "powersink.h"

namespace Challenger604Systems {

PowerSink::PowerSink(PowerSource *inSource)
{
    source = inSource;
}

double PowerSink::getCurrentWattage() {
    if(source->getCurrentWattage() > getTargetWattage()) {
        return getTargetWattage();
    }
    else {
        return source->getCurrentWattage();
    }
}

}
