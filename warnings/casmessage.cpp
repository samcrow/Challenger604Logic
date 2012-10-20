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

AuralWarningSystem::WarningSound CASMessage::getSound() {
    return AuralWarningSystem::NO_SOUND;
}

}
}
