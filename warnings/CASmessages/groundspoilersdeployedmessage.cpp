#include "groundspoilersdeployedmessage.h"


namespace Challenger604Systems {
namespace CAS {



GroundSpoilersDeployedMessage::GroundSpoilersDeployedMessage(QObject *parent) :
    CASCautionMessage(parent)
{
}

QString GroundSpoilersDeployedMessage::getDisplayText() {
    return "GND SPLRS DEPLOY";
}

AuralWarningSystem::WarningSound GroundSpoilersDeployedMessage::getSound() {
    return AuralWarningSystem::NO_SOUND;
}

bool GroundSpoilersDeployedMessage::isTakeoffIgnored() {
    return false;
}

bool GroundSpoilersDeployedMessage::isLandingIgnored() {
    return false;
}

}
}
