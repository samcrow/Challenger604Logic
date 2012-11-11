#ifndef TAKEOFFAUTOPILOTENGAGEDMESSAGE_H
#define TAKEOFFAUTOPILOTENGAGEDMESSAGE_H

#include "../../../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message that is sent when the aircraft is in takeoff configuration but the autopilot is engaged
  */
class CHALLENGER604LOGICSHARED_EXPORT TakeoffAutopilotEngagedMessage : public CASWarningMessage
{
public:
    TakeoffAutopilotEngagedMessage();

    string getDisplayText();

    AuralWarningSystem::WarningSound getSound();
    
};

}
}
#endif // TAKEOFFAUTOPILOTENGAGEDMESSAGE_H
