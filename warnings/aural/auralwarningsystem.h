#ifndef AURALWARNINGSYSTEM_H
#define AURALWARNINGSYSTEM_H

#include "../../Challenger604Logic_global.h"

namespace Challenger604Systems {

/**
  @brief A class for an aural warning system

  This class receives messages and plays sounds. It simulates the real aircraft's aural warning system.
  */
class CHALLENGER604LOGICSHARED_EXPORT AuralWarningSystem
{
public:
    AuralWarningSystem();

    /**
      An enumeration of all the different types of sounds that the system can produce
      */
    //Maybe move this to a config file in the future, once things are working
    enum WarningSound {
        NO_SOUND, /**< Does nothing */

        ATTENSON_SINGLE, /**< A single attention-getting chime or similar sound */
        ATTENSON_TRIPLE, /**< Three attention-getting sounds in sequence */

        CLACKER, /**< A drum roll-type sound (See flight controls section, page 12) */

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
    
};

}
#endif // AURALWARNINGSYSTEM_H
