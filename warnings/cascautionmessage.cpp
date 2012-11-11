#include "cascautionmessage.h"

namespace Challenger604Systems {
namespace CAS {

const Color CASCautionMessage::cautionColor = Color(255, 194, 124);

CASCautionMessage::CASCautionMessage()
{
}

CASMessage::Priority CASCautionMessage::getPriority() {
    return CAUTION;
}

bool CASCautionMessage::isTakeoffIgnored() {
    //Caution messages are inhibited by default
    return true;
}

bool CASCautionMessage::isLandingIgnored() {
    //Caution messages are inhibited by default
    return true;
}

bool CASCautionMessage::triggersMasterCaution() {
    //Caution messages trigger master caution lights by default
    return true;
}

AuralWarningSystem::WarningSound CASCautionMessage::getSound() {
    //Caution messages give a single attention-getting sound by default
    return AuralWarningSystem::ATTENSON_SINGLE;
}

}
}
