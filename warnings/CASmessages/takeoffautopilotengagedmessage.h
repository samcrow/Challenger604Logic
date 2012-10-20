#ifndef TAKEOFFAUTOPILOTENGAGEDMESSAGE_H
#define TAKEOFFAUTOPILOTENGAGEDMESSAGE_H

#include "../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message that is sent when the aircraft is in takeoff configuration but the autopilot is engaged
  */
class TakeoffAutopilotEngagedMessage : public CASWarningMessage
{
    Q_OBJECT
public:
    explicit TakeoffAutopilotEngagedMessage(QObject *parent = 0);

    QString getDisplayText();

    bool triggersMasterWarning();

    AuralWarningSystem::WarningSound getSound();

signals:
    
public slots:
    
};

}
}
#endif // TAKEOFFAUTOPILOTENGAGEDMESSAGE_H