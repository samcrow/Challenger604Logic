#ifndef STRIMCONFIGMESSAGE_H
#define STRIMCONFIGMESSAGE_H

#include "../../../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message sent when the aircraft is in takeoff configuration
  and the horizontal stabilizer (elevator) trim is not in the normal
  takeoff range of -3 to -6 degrees
  */
class STrimConfigMessage : public CASWarningMessage
{
public:
    STrimConfigMessage();

    string getDisplayText();

    AuralWarningSystem::WarningSound getSound();
    
};

}
}
#endif // STRIMCONFIGMESSAGE_H
