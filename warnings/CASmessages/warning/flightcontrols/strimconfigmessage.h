#ifndef STRIMCONFIGMESSAGE_H
#define STRIMCONFIGMESSAGE_H

#include "../../../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message sent when the aircraft is in takeoff configuration
  and the horizontal stabilizer (elevator) trim is not in the normal
  takeoff range of -3 to -6 degrees
  */
class STrimConfigMessage : public CASWarningMessage
{
    Q_OBJECT
public:
    explicit STrimConfigMessage(QObject *parent = 0);

    QString getDisplayText();

    AuralWarningSystem::WarningSound getSound();
    
signals:
    
public slots:
    
};

}
}
#endif // STRIMCONFIGMESSAGE_H
