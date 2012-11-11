#ifndef ELEVATORSPLITMESSAGE_H
#define ELEVATORSPLITMESSAGE_H

#include "../../../cascautionmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message indicating that the two elevators are not synchronized

  (Some system) sends this message when it detects that the actual position of the two elevators
  differs by more than 5 degrees.
  */
class ElevatorSplitMessage : public CASCautionMessage
{
public:
    ElevatorSplitMessage();

    string getDisplayText();
};

}
}
#endif // ELEVATORSPLITMESSAGE_H
