#ifndef TAKEOFFSPOILERSMESSAGE_H
#define TAKEOFFSPOILERSMESSAGE_H

#include "../../../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A warning message sent when the aircraft is in takeoff configuration and the flight or ground spoilers are extended (to any extent)
  */
class TakeoffSpoilersMessage : public CASWarningMessage
{
public:
    TakeoffSpoilersMessage();

    string getDisplayText();

    AuralWarningSystem::WarningSound getSound();
};

}
}
#endif // TAKEOFFSPOILERSMESSAGE_H
