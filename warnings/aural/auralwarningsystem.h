#ifndef AURALWARNINGSYSTEM_H
#define AURALWARNINGSYSTEM_H

#include <QObject>

#include "../../Challenger604Logic_global.h"

namespace Challenger604Systems {

/**
  @brief A class for an aural warning system

  This class receives messages and plays sounds. It simulates the real aircraft's aural warning system.
  */
class CHALLENGER604LOGICSHARED_EXPORT AuralWarningSystem : public QObject
{
    Q_OBJECT
public:
    explicit AuralWarningSystem(QObject *parent = 0);

    /**
      An enumeration of all the different types of sounds that the system can produce
      */
    enum WarningSound {
        NO_SOUND, /**< Does nothing */

        ATTENSON_SINGLE, /**< A single attention-getting chime or similar sound */
        ATTENSON_TRIPLE, /**< Three attention-getting sounds in sequence */

        VOICE_CONFIG_AUTOPILOT, /**< A voice saying "config autopilot" */
        VOICE_CONFIG_FLAPS, /**< A voice saying "config flaps" */
        VOICE_CONFIG_SPOILERS, /**< A voice saying "config spoilers" */
        VOICE_CONFIG_TRIM, /**< A voice saying, "config trim" */
        VOICE_CONFIG_BRAKES /**< A voice saying, "config brakes" */
    };
    
    /**
      @brief Play a given warning sound

      If a sound is currently being played, this will not happen immediately.

      @param warning The sound to play
      */
    void playWarningSound(WarningSound warning);

signals:
    
public slots:
    
};

}
#endif // AURALWARNINGSYSTEM_H
