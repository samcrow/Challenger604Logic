#ifndef STABTRIMFAILMESSAGE_H
#define STABTRIMFAILMESSAGE_H

#include "../../../cascautionmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message sent when both channels of horizontal stabilizer trim control fail

  The Horizontal Stabilizer Trim Control Unit should detect this situation, cancel and delete
  any previous HStabChannelInopMessage messages, and send one of these.
  */
class StabTrimFailMessage : public CASCautionMessage
{
public:
    StabTrimFailMessage();

    string getDisplayText();
    
};

}
}
#endif // STABTRIMFAILMESSAGE_H
