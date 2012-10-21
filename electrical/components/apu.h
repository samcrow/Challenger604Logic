#ifndef APU_H
#define APU_H

#include <QObject>
#include "../defs/simpledcpowersource.h"
#include "Challenger604Logic_global.h"

namespace Challenger604Systems {

/**
  @brief The aircraft Auxilliary Power Unit
  */
class CHALLENGER604LOGICSHARED_EXPORT APU : public SimpleDCPowerSource
{
    Q_OBJECT
public:
    explicit APU(QObject *parent = 0);
    
signals:
    
public slots:
    
};

}

#endif // APU_H
