#ifndef CASWARNINGMESSAGE_H
#define CASWARNINGMESSAGE_H

#include "casmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A CAS message with a priority level of ADVISORY
  */
class CASAdvisoryMessage : public CASMessage
{
    Q_OBJECT
public:
    explicit CASAdvisoryMessage(QObject *parent = 0);

    Priority getPriority();
    
signals:
    
public slots:
    
};



}
}
#endif // CASWARNINGMESSAGE_H