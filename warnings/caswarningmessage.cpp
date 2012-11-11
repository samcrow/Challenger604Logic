#include "caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

const Color CASWarningMessage::warningColor = Color(239, 25, 45);

CASWarningMessage::CASWarningMessage()
{
}

CASMessage::Priority CASWarningMessage::getPriority() {
    return WARNING;
}

bool CASWarningMessage::triggersMasterWarning() {
    return true;
}

}
}
