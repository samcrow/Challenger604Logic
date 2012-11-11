#ifndef FLAPSMOTOROVERHEATMESSAGE_H
#define FLAPSMOTOROVERHEATMESSAGE_H

#include "../../../casstatusmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message that indicates that a single flaps motor has overheated

  In this condition, the flaps operate at half speed (each side has two motors)
  */
class FlapsMotorOverheatMessage : public CASStatusMessage
{
public:
    FlapsMotorOverheatMessage();

    string getDisplayText();
    
};

}
}
#endif // FLAPSMOTOROVERHEATMESSAGE_H
