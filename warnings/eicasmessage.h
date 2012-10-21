#ifndef EICASMESSAGE_H
#define EICASMESSAGE_H

#include <QMutex>

#include "casmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief Stores a string of text and a priority level for an ECIAS text message. Also keeps track of the order in which messages are received.

  To get the text of the message to be displayed, use getMessageText().
  To get the message's priority level, use getPriority().
  */
class EICASMessage
{
public:
    /**
      @brief Constructor that takes a CASMessage

      This constructor will extract the priority level and text from the given CAS message.
      If the given message's getDisplayText() function returns an empty string, the EICAS will display an empty space (no text).
      @param casMessage The message to display
      */
    EICASMessage(CASMessage * casMessage);

    /**
      Get the text to display
      */
    QString getMessageText();

    /**
      Get the priority level of this message
      */
    CASMessage::Priority getPriority();

    /**
      Compare the sequence position of two messages

      One message is > the other if its sequence
      number is greater (meaning that it was created later)
      */
    bool operator > (EICASMessage other) const;

    /**
      Compare the sequence position of two messages

      One message is < the other if its sequence
      number is less (meaning that it was created later)
      */
    bool operator < (EICASMessage other) const;

protected:
    //EICAS message data fields

    /** The text of the message to display */
    QString messageText;
    /** The priority level to display the text at */
    CASMessage::Priority priority;
    /**
      @brief The number of this message in the sequence of messages received (using the field count)

      For the first message, this will be zero. It will be incremented for each subsequent message.
      */
    int sequence;

    //Static fields
    /**
      @brief The number in the sequence of the most recently received message

      This starts out as zero. For every new message, it is incremented by one and the new message is given the new incremented value.
      */
    static int count;
    /** @brief Mutex used to lock the sequence number when a new message instance is created */
    static QMutex countMutex;

};


}
}
#endif // EICASMESSAGE_H
