#include "takeoffspoilersmessage.h"

namespace Challenger604Systems {
namespace CAS {

TakeoffSpoilersMessage::TakeoffSpoilersMessage(QObject *parent) :
    CASWarningMessage(parent)
{
}

QString TakeoffSpoilersMessage::getDisplayText() {
    return "CONFIG SPOILERS";
}

AuralWarningSystem::WarningSound TakeoffSpoilersMessage::getSound() {
    return AuralWarningSystem::VOICE_CONFIG_SPOILERS;
}

}
}
