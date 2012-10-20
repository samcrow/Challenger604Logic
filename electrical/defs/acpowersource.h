#ifndef ACPOWERSOURCE_H
#define ACPOWERSOURCE_H

#include "powersource.h"
#include "../../Challenger604Logic_global.h"

namespace Challenger604Systems {

/**
  A power source that supplies AC power and can provide information on the frequency of the output electricity
  */
class CHALLENGER604LOGICSHARED_EXPORT ACPowerSource : public PowerSource
{
    Q_OBJECT
public:
    explicit ACPowerSource(QObject *parent = 0);

    /**
      Get the frequency, in hertz, of the electricity currently being supplied by this source
      */
    virtual double getCurrentFrequency() = 0;
    
signals:
    
public slots:
    
};

}

#endif // ACPOWERSOURCE_H
