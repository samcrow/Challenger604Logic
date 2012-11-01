#include "casmessagehandler.h"

#include <QDebug>
#include <algorithm>

namespace Challenger604Systems {
namespace CAS {


CASMessageHandler::CASMessageHandler(QObject *parent) :
    QObject(parent),
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
        EICASMessage eicasMessage(newMessage);

        //Add the ECIAS message to the data structure with a pointer to the message as the key
        eicasMessages.insert(newMessage, eicasMessage);
    }

}


void CASMessageHandler::cancelMessage(CASMessage * message) {

    //Remove the ECIAS message, if any, from the set of ECIAS messages
    eicasMessages.remove(message);

    Q_ASSERT_X(messages.contains(message), "message cancel presence check", "Tried to cancel a message that was not in the list of messages");

    messages.removeAll(message);
}

QList<EICASMessage> CASMessageHandler::getEicasWarningMessages() {
    return getEicasMessages(CASMessage::WARNING);
}

QList<EICASMessage> CASMessageHandler::getEicasCautionMessages() {
    return getEicasMessages(CASMessage::CAUTION);
}

QList<EICASMessage> CASMessageHandler::getEicasAdvisoryMessages() {
    return getEicasMessages(CASMessage::ADVISORY);
}

QList<EICASMessage> CASMessageHandler::getEicasStatusMessages() {
    return getEicasMessages(CASMessage::STATUS);
}

QList<EICASMessage> CASMessageHandler::getEicasMessages(CASMessage::Priority priority) {
    //Assemble a list of every EICAS message with the given priority level
    QList<EICASMessage> messages;

    QHashIterator<CASMessage *, EICASMessage> iterator(eicasMessages);
    while(iterator.hasNext()) {
        iterator.next();

        EICASMessage message = iterator.value();
        if(message.getPriority() == priority) {
            messages.append(message);
        }
    }

    //Only sort the list if there are actually 2 or more messages in it
    if(messages.length() >= 2) {
        //Sort the messages from first to last creation order
        std::sort(messages.begin(), messages.end());
    }

    return messages;
}


void CASMessageHandler::dumpEciasMessages() {
    qDebug() << "ECIAS text message dump: message pointer | text | priority";

    QHashIterator<CASMessage *, EICASMessage> iterator(eicasMessages);
    while(iterator.hasNext()) {
        iterator.next();

        EICASMessage message = iterator.value();

        qDebug() << iterator.key() << "\t" << message.getMessageText() << "\t" << message.getPriority();
    }
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
