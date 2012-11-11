#ifndef TAKEOFFFLAPSMESSAGE_H
#define TAKEOFFFLAPSMESSAGE_H

#include "../../../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A warning message that is sent when the aircraft is in takeoff configuration but the flaps are not set at 20 degrees
  */
class CHALLENGER604LOGICSHARED_EXPORT TakeoffFlapsMessage : public CASWarningMessage
{
public:
    TakeoffFlapsMessage();

    string getDisplayText();

    AuralWarningSystem::WarningSound getSound();
    
};

}
}
#endif // TAKEOFFFLAPSMESSAGE_H
