#ifndef TRU_H
#define TRU_H

#include "../../Challenger604Logic_global.h"

#include "../defs/simpledcpowersource.h"
#include "../defs/acpowersource.h"
#include "../defs/simpleacpowersink.h"

namespace Challenger604Systems {

/**
  Simulates a Transformer-Rectifier Unit
  This converts AC into DC.
  Currently, the imperfect efficiency of this device is simulated by removing a portion of the power that passes through it.
  */
class CHALLENGER604LOGICSHARED_EXPORT TRU : public SimpleDCPowerSource, public SimpleACPowerSink
{
    Q_OBJECT
public:
    explicit TRU(ACPowerSource * inSource, QObject *parent = 0);

    /**
      The ratio of efficiency of a TRU. 1 is perfectly efficient, 0 means that it converts all its input energy into heat
      (and will result in a divide-by-zero error).
      */
    static const double efficiency;

protected:

    /**
      The source that supplies AC power to this TRU
      */
    ACPowerSource * acSource;

signals:
    
public slots:

    //Implements from PowerSource
    virtual void requestPower(double inRequestedPower);
    
};

}
#endif // TRU_H
