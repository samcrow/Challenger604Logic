#include "flapsfailmessage.h"

namespace Challenger604Systems {
namespace CAS {

FlapsFailMessage::FlapsFailMessage(QObject *parent) :
    CASCautionMessage(parent)
{
}

QString FlapsFailMessage::getDisplayText() {
    return "FLAPS FAIL";
}

}
}
