#ifndef CASMESSAGEHANDLER_H
#define CASMESSAGEHANDLER_H

#include <vector>
#include <algorithm>
#include <map>

#include "../Challenger604Logic_global.h"

#include "aural/auralwarningsystem.h"
#include "caswarningmessage.h"
#include "cascautionmessage.h"
#include "casadvisorymessage.h"
#include "casstatusmessage.h"
#include "eicasmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief Handles Crew Alerting System messages

  This class gets notified when a message is sent (a condition first exists)
  and later when the message is canceled (the condition has been resolved).
  It decides what to display on the ECIAS display.
  */
class CHALLENGER604LOGICSHARED_EXPORT CASMessageHandler
{
public:
    CASMessageHandler();

    /** Determine if the master caution lights are on */
    bool isMasterCautionOn();
    /** Determine if the master warning lights are on */
    bool isMasterWarningOn();

    /**
      @brief Get the current ECIAS warning messages

      The first message in the list is the oldest.
      If no messages exist, this returns an empty QList.
      */
    vector<EICASMessage> getEicasWarningMessages();
    /**
      @brief Get the current ECIAS caution messages

      The first message in the list is the oldest.
      This does not return messages that are inhibited on takeoff and landing.
      If no messages exist, this returns an empty QList.
      */
    vector<EICASMessage> getEicasCautionMessages();
    /**
      @brief Get the current ECIAS advisory messages

      The first message in the list is the oldest.
      If no messages exist, this returns an empty QList.
      */
    vector<EICASMessage> getEicasAdvisoryMessages();
    /**
      @brief Get the current ECIAS status messages

      The first message in the list is the oldest.
      If no messages exist, this returns an empty QList.
      */
    vector<EICASMessage> getEicasStatusMessages();



    /**
      @brief Submit a new message to the message handler

      When a system monitor determines that a new situation exists that warrants crew notification,
      it should create a new CASMessage of the appropriate type and provide it as a parameter in this function/slot.
      <br />
      The handler will display it on the ECIAS, turn on warning lights, and/or play sounds as specified by the message.
      <br /><br />
      Memory management: Do not delete the message until after you have called cancelMessage() with it as a parameter.
      Until this happens, the message handler will keep its pointer to the message.

      @param newMessage The message to transmit
      */
    void newMessage(CASMessage * newMessage);

    /**
      @brief Cancel a message

      When a system monitor determines that a situation that previously resulted in a CAS message no longer exists and
      the message no longer needs to be displayed, it should call this function with that message as an argument.
      <br />
      The handler will remove the message from the ECIAS. Master warning and caution lights will remain on until they are reset seperately.
      Warning sounds will continue playing until they end.
      <br /><br />
      After calling this function, you can safely delete the message.

      @param message The message to remove.
      */
    void cancelMessage(CASMessage * message);

    /**
      @brief Reset the master caution lights, turning them off
      */
    void resetMasterCaution();

    /**
      @brief Reset the master warning lights, turning them off
      */
    void resetMasterWarning();
    
protected:

    /** The current active messages */
    vector<CASMessage *> messages;

    /**
      @brief The set of messages to display on the EICAS display

      This associates each CAS message with a single EICAS message.
      */
    map<CASMessage *, EICASMessage> eicasMessages;

    /** If the master caution lights are currently on */
    bool masterCautionOn;

    /** If the master warning lights are currently on */
    bool masterWarningOn;

    /** Turn on the master caution lights */
    void enableMasterCaution();
    /** Turn on the master warning lights */
    void enableMasterWarning();

    /**
      @brief Get a list of EICAS messages from the eciasMessages data structure and sort
      them according to creation order, earliest first

      If there are no messages with the given priority level, this function returns an empty QList.
      @param priority The priority level of messages to search for
      */
    vector<EICASMessage> getEicasMessages(CASMessage::Priority priority);
};


}
}
#endif // CASMESSAGEHANDLER_H
