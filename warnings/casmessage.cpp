#include "casmessage.h"

#include <QMetaEnum>

namespace Challenger604Systems {
namespace CAS {

CASMessage::CASMessage(QObject *parent) :
    QObject(parent)
{
}

QString CASMessage::getDisplayText() {
    return QString();
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
