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
    Q_OBJECT
public:

    /**
      Constructor
      @param channel The HSTCU channel that this message indicates is inoperative.
      This is usually 1 or 2.
      */
    explicit HStabilizerChannelInopMessage(quint8 channel, QObject *parent = 0);

    QString getDisplayText();
    
private:

    /**
      The channel number that this message concerns. In normal operation, this is either 1 or 2.
      */
    quint8 channelNumber;

signals:
    
public slots:
    
};


}
}
#endif // HSTABILIZERCHANNELINOPMESSAGE_H
