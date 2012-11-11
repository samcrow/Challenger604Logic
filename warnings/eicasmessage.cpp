#include "eicasmessage.h"

namespace Challenger604Systems {
namespace CAS {

//Initialize static variables
int EICASMessage::count = 0;

EICASMessage::EICASMessage(CASMessage *casMessage)
{
    //Give this message the current sequence number, then increment the static count
    sequence = count;
    count++;

    priority = casMessage->getPriority();
    messageText = casMessage->getDisplayText();
}

string EICASMessage::getMessageText() {
    return messageText;
}

CASMessage::Priority EICASMessage::getPriority() {
    return priority;
}

bool EICASMessage::operator > (EICASMessage other) const {
    return this->sequence > other.sequence;
}

bool EICASMessage::operator < (EICASMessage other) const {
    return this->sequence < other.sequence;
}

}
}
