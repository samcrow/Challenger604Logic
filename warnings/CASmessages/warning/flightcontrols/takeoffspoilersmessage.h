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
    Q_OBJECT
public:
    explicit TakeoffSpoilersMessage(QObject *parent = 0);

    QString getDisplayText();

    AuralWarningSystem::WarningSound getSound();
    
signals:
    
public slots:
    
};

}
}
#endif // TAKEOFFSPOILERSMESSAGE_H
