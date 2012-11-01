#include "elevatorsplitmessage.h"

namespace Challenger604Systems {
namespace CAS {

ElevatorSplitMessage::ElevatorSplitMessage(QObject *parent) :
    CASCautionMessage(parent)
{
}

QString ElevatorSplitMessage::getDisplayText() {
    return "ELEVATOR SPLIT";
}

}
}
