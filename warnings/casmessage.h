#ifndef CASMESSAGE_H
#define CASMESSAGE_H

#include <QObject>

#include "aural/auralwarningsystem.h"

namespace Challenger604Systems {
/**
  @brief Contains things for the Crew Alerting System that displays messages to crew members
  */
namespace CAS {

/**
  @brief Base class for a Crew Alerting System message

  Every message that a system sends is one of these.
  A CAS message can have a priority level of warning, caution, advisory, or status.
  <br /><br />
  As a result of the sending of a message, one or more of the following may happen:
  <ul>
    <li>A message may be displayed on the ECIAS screen</li>
    <li>The aural warning system may sound an attention-getting sound and/or a voice warning</li>
    <li>The master caution or master warning lights may illuminate</li>
  </ul>
  */
class CASMessage : public QObject
{
    Q_OBJECT
public:
    explicit CASMessage(QObject *parent = 0);
    
    /**
      @brief An enumeration of priority levels for messages
      */
    enum Priority {
        /**
          @brief A warning message (highest priority)

          Warning messages are displayed in red.
          A warning message always triggers a triple attention-getting sound and turns on the master warning lights.
          */
        WARNING,

        /**
          @brief A caution message (second highest priority)

          Caution messages are displayed in yellow.
          A caution message always triggers a single attention-getting sound and turns on the master caution lights.
          */
        CAUTION,

        /**
          @brief An advisory message
          */
        ADVISORY,

        /**
          @brief A status message
          */
        STATUS
    };

    /**
      Get the priority level of this message
      */
    virtual Priority getPriority() = 0;

    /**
      @brief Get the text that this message should display on the ECIAS display.

      This should be short and in all capital letters
      */
    virtual QString getDisplayText();

    /**
      @brief Determine if this message should turn on the master caution lights

      The default implementation returns false, so a message that does not use the master
      caution lights does not need to override this.
      */
    virtual bool triggersMasterCaution();

    /**
      @brief Determine if this message should turn on the master warning lights

      The default implementation returns false, so a message that does not use the master
      warning lights does not need to override this.
      */
    virtual bool triggersMasterWarning();

    /**
      @brief Get the sound that this message triggers

      The default implementation returns AuralWarningSystem::NO_SOUND, so a message that does not play
      sound does not need to override this.

      @return The sound that this message should play, or AuralWarningSystem::NO_SOUND if it should not play a sound
      */
    virtual AuralWarningSystem::WarningSound getSound();

    /**
      @brief Determine if this message should be ignored when the aircraft is taking off or landing.

      The criteria for taking off and landing are explained in the Aural and Visual Warning document
      on pages 16-17.

      The default implementation returns false, so a message that is not ignored does not need
      to override this message.
      */
    virtual bool isTakeoffLandingIgnored();

signals:
    
public slots:
    
};

}
}
#endif // CASMESSAGE_H
