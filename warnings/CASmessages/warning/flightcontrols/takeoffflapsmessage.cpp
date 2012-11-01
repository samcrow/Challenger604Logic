#include "takeoffflapsmessage.h"

//TODO: Add the three remaining takeoff config warnings

namespace Challenger604Systems {
namespace CAS {

TakeoffFlapsMessage::TakeoffFlapsMessage(QObject *parent) :
    CASWarningMessage(parent)
{
}

QString TakeoffFlapsMessage::getDisplayText() {
    return "CONFIG FLAPS";
}

AuralWarningSystem::WarningSound TakeoffFlapsMessage::getSound() {
    return AuralWarningSystem::VOICE_CONFIG_FLAPS;
}

}
}
