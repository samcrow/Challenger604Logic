#ifndef ENDLESSACPOWERSOURCE_H
#define ENDLESSACPOWERSOURCE_H

#include "../../Challenger604Logic_global.h"

#include "../defs/simpleacpowersource.h"

namespace Challenger604Systems {

/**
  @brief A power source that provides endless (up to 1.7976931348623157 * 10^308 watts) of AC power
  at exactly 400 hertz and responds instantly to power requests.
  */
class CHALLENGER604LOGICSHARED_EXPORT EndlessACPowerSource : public SimpleACPowerSource
{
public:
    EndlessACPowerSource();

    virtual void requestPower(double inRequestedPower);
    
};

}
#endif // ENDLESSACPOWERSOURCE_H
