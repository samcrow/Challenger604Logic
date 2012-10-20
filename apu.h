#ifndef APU_H
#define APU_H

#include <QObject>
#include "simplepowersource.h"

namespace Challenger604Systems {

class APU : public SimplePowerSource
{
    Q_OBJECT
public:
    explicit APU(QObject *parent = 0);
    
signals:
    
public slots:
    
};

}

#endif // APU_H
