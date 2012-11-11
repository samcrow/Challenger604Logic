#include "strimconfigmessage.h"

namespace Challenger604Systems {
namespace CAS {


STrimConfigMessage::STrimConfigMessage()
{
}

string STrimConfigMessage::getDisplayText() {
    return "CONFIG STAB";
}

AuralWarningSystem::WarningSound STrimConfigMessage::getSound() {
    return AuralWarningSystem::VOICE_CONFIG_TRIM;
}

}
}
