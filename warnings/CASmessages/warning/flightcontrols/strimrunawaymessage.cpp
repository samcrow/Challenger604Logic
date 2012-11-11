#include "strimrunawaymessage.h"

namespace Challenger604Systems {
namespace CAS {


STrimRunawayMessage::STrimRunawayMessage()
{
}

string STrimRunawayMessage::getDisplayText() {
    //No display text; return an empty string
    return "";
}

AuralWarningSystem::WarningSound STrimRunawayMessage::getSound() {
    return AuralWarningSystem::CLACKER;
}

bool STrimRunawayMessage::triggersMasterWarning() {
    return false;
}

}
}
