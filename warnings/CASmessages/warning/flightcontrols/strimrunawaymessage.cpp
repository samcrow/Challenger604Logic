#include "strimrunawaymessage.h"

namespace Challenger604Systems {
namespace CAS {


STrimRunawayMessage::STrimRunawayMessage(QObject *parent) :
    CASWarningMessage(parent)
{
}

QString STrimRunawayMessage::getDisplayText() {
    //No display text; return an empty string
    return QString();
}

AuralWarningSystem::WarningSound STrimRunawayMessage::getSound() {
    return AuralWarningSystem::CLACKER;
}

bool STrimRunawayMessage::triggersMasterWarning() {
    return false;
}

}
}
