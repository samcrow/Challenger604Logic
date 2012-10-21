#include "casmessagehandler.h"

namespace Challenger604Systems {
namespace CAS {


CASMessageHandler::CASMessageHandler(QObject *parent) :
    QObject(parent)
{
}

void CASMessageHandler::newMessage(CASMessage * newMessage) {
    /*
      Steps
      1. Put the message in the data structure
      2. Do the actions specified by the message
      */

    messages.append(newMessage);

    //Master caution and warning
    if(newMessage->triggersMasterCaution()) {
        enableMasterCaution();
    }
    if(newMessage->triggersMasterWarning()) {
        enableMasterWarning();
    }

    //Sound
    if(newMessage->getSound() != AuralWarningSystem::NO_SOUND) {
        //TODO: Access the aural warning system and play the sound
    }

    //Text
    QString messageText = newMessage->getDisplayText();
    if(!messageText.isEmpty()) {
        //Create a new ECIAS message struct with the text and priority of the message
        ECIASMessage eciasMessage(messageText, newMessage->getPriority());

        //Add the ECIAS message to the data structure with a pointer to the message as the key
        eciasMessages.insert(newMessage, eciasMessage);
    }

}


void CASMessageHandler::cancelMessage(CASMessage * message) {

    //Remove the ECIAS message, if any, from the set of ECIAS messages
    eciasMessages.remove(message);

    Q_ASSERT_X(messages.contains(message), "message cancel presence check", "Tried to cancel a message that was not in the list of messages");

    messages.removeAll(message);
}


bool CASMessageHandler::isMasterCautionOn() {
    return masterCautionOn;
}

bool CASMessageHandler::isMasterWarningOn() {
    return masterWarningOn;
}

void CASMessageHandler::enableMasterCaution() {
    masterCautionOn = true;
}

void CASMessageHandler::enableMasterWarning() {
    masterWarningOn = true;
}

void CASMessageHandler::resetMasterCaution() {
    masterCautionOn = false;
}

void CASMessageHandler::resetMasterWarning() {
    masterWarningOn = false;
}

}
}
