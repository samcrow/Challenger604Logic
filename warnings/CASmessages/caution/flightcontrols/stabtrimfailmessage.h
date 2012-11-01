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
    Q_OBJECT
public:
    explicit StabTrimFailMessage(QObject *parent = 0);

    QString getDisplayText();
    
signals:
    
public slots:
    
};

}
}
#endif // STABTRIMFAILMESSAGE_H
