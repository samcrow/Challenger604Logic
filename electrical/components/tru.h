#ifndef TRU_H
#define TRU_H

#include "../defs/simpledcpowersource.h"
#include "../defs/acpowersource.h"

namespace Challenger604Systems {

/**
  Simulates a Transformer-Rectifier Unit
  This converts AC into DC.
  Currently, the imperfect efficiency of this device is simulated by removing a portion of the power that passes through it.
  */
class TRU : public SimpleDCPowerSource
{
    Q_OBJECT
public:
    explicit TRU(QObject *parent = 0);
    

protected:

    ACPowerSource *PowerSource;

signals:
    
public slots:
    
};

}
#endif // TRU_H
