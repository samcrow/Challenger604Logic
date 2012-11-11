#include "casstatusmessage.h"

namespace Challenger604Systems {
namespace CAS {



CASStatusMessage::CASStatusMessage()
{
}

CASMessage::Priority CASStatusMessage::getPriority() {
    return STATUS;
}

}
}
