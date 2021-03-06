#ifndef APU_H
#define APU_H

#include "../defs/simpledcpowersource.h"
#include "Challenger604Logic_global.h"

namespace Challenger604Systems {

/**
  @brief The aircraft Auxilliary Power Unit
  */
class CHALLENGER604LOGICSHARED_EXPORT APU : public SimpleDCPowerSource
{
public:
    APU();
    
};

}

#endif // APU_H
