#include "casadvisorymessage.h"

namespace Challenger604Systems {
namespace CAS {

const Color CASAdvisoryMessage::advisoryColor = Color(74, 183, 90);

CASAdvisoryMessage::CASAdvisoryMessage(QObject *parent) :
    CASMessage(parent)
{
}

CASMessage::Priority CASAdvisoryMessage::getPriority() {
    return ADVISORY;
}

Color CASAdvisoryMessage::getDisplayColor() {
    return advisoryColor;
}

}
}
