#ifndef TAKEOFFFLAPSMESSAGE_H
#define TAKEOFFFLAPSMESSAGE_H

#include "../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A warning message that is sent when the aircraft is in takeoff configuration but the flaps are not set
  */
class CHALLENGER604LOGICSHARED_EXPORT TakeoffFlapsMessage : public CASWarningMessage
{
    Q_OBJECT
public:
    explicit TakeoffFlapsMessage(QObject *parent = 0);

    QString getDisplayText();

    bool triggersMasterWarning();

    AuralWarningSystem::WarningSound getSound();
    
signals:
    
public slots:
    
};

}
}
#endif // TAKEOFFFLAPSMESSAGE_H
