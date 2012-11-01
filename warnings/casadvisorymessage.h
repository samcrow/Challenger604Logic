#ifndef CASADVISORYMESSAGE_H
#define CASADVISORYMESSAGE_H

#include "casmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A CAS message with a priority level of ADVISORY

  Advisory messages are displayed in green by default. Individual messages
  can override getDisplayColor() to change this.
  */
class CHALLENGER604LOGICSHARED_EXPORT CASAdvisoryMessage : public CASMessage
{
    Q_OBJECT
public:
    explicit CASAdvisoryMessage(QObject *parent = 0);

    Priority getPriority();

    /** The green color used for advisory messages */
    static const Color advisoryColor;
    
signals:
    
public slots:
    
};



}
}
#endif // CASADVISORYMESSAGE_H
