#include "powersink.h"

namespace Challenger604Systems {

PowerSink::PowerSink(PowerSource *inSource)
{
    source = inSource;
}

double PowerSink::getCurrentInputWattage() {
    if(source->getCurrentOutputWattage() > getTargetInputWattage()) {
        return getTargetInputWattage();
    }
    else {
        return source->getCurrentOutputWattage();
    }
}

}
