#include "cascautionmessage.h"

namespace Challenger604Systems {
namespace CAS {



CASCautionMessage::CASCautionMessage(QObject *parent) :
    CASMessage(parent)
{
}

CASMessage::Priority CASCautionMessage::getPriority() {
    return CAUTION;
}

}
}
