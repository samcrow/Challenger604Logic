#ifndef STRIMRUNAWAYMESSAGE_H
#define STRIMRUNAWAYMESSAGE_H

#include "../../../caswarningmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message to alert crew of a possible horizontal stabilizer (elevator) trim runaway condition

  This should be sent when the trim changes at a rate of more than 0.3 degrees/second for more than 3 seconds.
  This triggers a single clacker sound. It does not display an EICAS text message or activate any warning lights.
  */
class STrimRunawayMessage : public CASWarningMessage
{
    Q_OBJECT
public:
    explicit STrimRunawayMessage(QObject *parent = 0);

    /**
      Returns an empty string
      */
    QString getDisplayText();

    AuralWarningSystem::WarningSound getSound();

    bool triggersMasterWarning();
    
signals:
    
public slots:
    
};

}
}
#endif // STRIMRUNAWAYMESSAGE_H
