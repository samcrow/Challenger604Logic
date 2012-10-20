#include "casadvisorymessage.h"

namespace Challenger604Systems {
namespace CAS {



CASAdvisoryMessage::CASAdvisoryMessage(QObject *parent) :
    CASMessage(parent)
{
}

CASMessage::Priority CASAdvisoryMessage::getPriority() {
    return ADVISORY;
}

}
}
