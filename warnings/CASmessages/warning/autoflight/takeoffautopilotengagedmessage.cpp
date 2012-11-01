#include "takeoffautopilotengagedmessage.h"

namespace Challenger604Systems {
namespace CAS {

TakeoffAutopilotEngagedMessage::TakeoffAutopilotEngagedMessage(QObject *parent) :
    CASWarningMessage(parent)
{
}

QString TakeoffAutopilotEngagedMessage::getDisplayText() {
    return "CONFIG AP";
}

AuralWarningSystem::WarningSound TakeoffAutopilotEngagedMessage::getSound() {
    return AuralWarningSystem::VOICE_CONFIG_AUTOPILOT;
}

}
}
