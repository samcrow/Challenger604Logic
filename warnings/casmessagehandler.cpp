#include "casmessagehandler.h"

#include <algorithm>

namespace Challenger604Systems {
namespace CAS {


CASMessageHandler::CASMessageHandler() :
    masterCautionOn(false),
    masterWarningOn(false)
{
}

void CASMessageHandler::newMessage(CASMessage * newMessage) {
    /*
      Steps
      1. Put the message in the data structure
      2. Do the actions specified by the message
      */

    messages.push_back(newMessage);

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
    string messageText = newMessage->getDisplayText();
    if(!messageText.empty()) {
        //Create a new ECIAS message struct with the text and priority of the message
        EICASMessage eicasMessage(newMessage);

        //Add the ECIAS message to the data structure with a pointer to the message as the key
        eicasMessages.insert(pair<CASMessage *, EICASMessage>(newMessage, eicasMessage));
    }

}


void CASMessageHandler::cancelMessage(CASMessage * message) {

    //Remove the ECIAS message, if any, from the set of ECIAS messages
    eicasMessages.erase(message);

    //Remove this message from the main data structure
    for(int i = 0, max = messages.size(); i < max; i++) {
        if(messages.at(i) == message) {
            messages.erase(messages.begin() + i);
            break;
        }
    }
}

vector<EICASMessage> CASMessageHandler::getEicasWarningMessages() {
    return getEicasMessages(CASMessage::WARNING);
}

vector<EICASMessage> CASMessageHandler::getEicasCautionMessages() {
    return getEicasMessages(CASMessage::CAUTION);
}

vector<EICASMessage> CASMessageHandler::getEicasAdvisoryMessages() {
    return getEicasMessages(CASMessage::ADVISORY);
}

vector<EICASMessage> CASMessageHandler::getEicasStatusMessages() {
    return getEicasMessages(CASMessage::STATUS);
}

vector<EICASMessage> CASMessageHandler::getEicasMessages(CASMessage::Priority priority) {
    //Assemble a list of every EICAS message with the given priority level
    vector<EICASMessage> messages;

    //TODO rewrite with STL
//    QHashIterator<CASMessage *, EICASMessage> iterator(eicasMessages);
//    while(iterator.hasNext()) {
//        iterator.next();

//        EICASMessage message = iterator.value();
//        if(message.getPriority() == priority) {
//            messages.append(message);
//        }
//    }

    //Only sort the list if there are actually 2 or more messages in it
    if(messages.size() >= 2) {
        //Sort the messages from first to last creation order
        std::sort(messages.begin(), messages.end());
    }

    return messages;
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
