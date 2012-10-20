#include "caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {



CASWarningMessage::CASWarningMessage(QObject *parent) :
    CASMessage(parent)
{
}

CASMessage::Priority CASWarningMessage::getPriority() {
    return WARNING;
}

}
}
