#ifndef HSTABILIZERCHANNELINOPMESSAGE_H
#define HSTABILIZERCHANNELINOPMESSAGE_H

#include "../../../casstatusmessage.h"


namespace Challenger604Systems {
namespace CAS {

/**
  @brief A status message to indicate that one channel of the Horizontal Stabilizer Trim Control Unit is inoperative
  */
class HStabilizerChannelInopMessage : public CASStatusMessage
{
public:

    /**
      Constructor
      @param channel The HSTCU channel that this message indicates is inoperative.
      This is usually 1 or 2.
      */
    HStabilizerChannelInopMessage(uint8_t channel);

    string getDisplayText();
    
private:

    /**
      The channel number that this message concerns. In normal operation, this is either 1 or 2.
      */
    uint8_t channelNumber;
};


}
}
#endif // HSTABILIZERCHANNELINOPMESSAGE_H
