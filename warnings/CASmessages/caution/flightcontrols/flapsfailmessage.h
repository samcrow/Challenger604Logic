#ifndef FLAPSFAILMESSAGE_H
#define FLAPSFAILMESSAGE_H

#include "../../../cascautionmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A caution message indicating that the flaps have failed

  This also triggers an amber symbol on the EICAS flight controls synoptic page
  (not yet implemented).
  */
class FlapsFailMessage : public CASCautionMessage
{
public:
    FlapsFailMessage();

    string getDisplayText();
    
};

}
}
#endif // FLAPSFAILMESSAGE_H
