#include "casmessage.h"

namespace Challenger604Systems {
namespace CAS {

CASMessage::CASMessage()
{
}

string CASMessage::getDisplayText() {
    return "";
}

bool CASMessage::triggersMasterCaution() {
    return false;
}

bool CASMessage::triggersMasterWarning() {
    return false;
}

bool CASMessage::isTakeoffIgnored() {
    //Messages are transmitted (not ignored) by default
    return false;
}

bool CASMessage::isLandingIgnored() {
    //Messages are transmitted (not ignored) by default
    return false;
}

AuralWarningSystem::WarningSound CASMessage::getSound() {
    return AuralWarningSystem::NO_SOUND;
}

}
}
