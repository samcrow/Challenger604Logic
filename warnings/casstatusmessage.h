#ifndef CASSTATUSMESSAGE_H
#define CASSTATUSMESSAGE_H

#include "casmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A CAS message with a priority level of STATUS

  Status messages are displayed in white.
  */
class CHALLENGER604LOGICSHARED_EXPORT CASStatusMessage : public CASMessage
{
public:
    CASStatusMessage();

    Priority getPriority();
};



}
}
#endif // CASSTATUSMESSAGE_H
