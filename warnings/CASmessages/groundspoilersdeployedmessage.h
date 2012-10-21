#ifndef GROUNDSPOILERSDEPLOYEDMESSAGE_H
#define GROUNDSPOILERSDEPLOYEDMESSAGE_H

#include "../cascautionmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message sent when the ground spoilers are deployed

  This message is not inhibited on takeoff nor on landing.
  */
class CHALLENGER604LOGICSHARED_EXPORT GroundSpoilersDeployedMessage : public CASCautionMessage
{
    Q_OBJECT
public:
    explicit GroundSpoilersDeployedMessage(QObject *parent = 0);

    QString getDisplayText();

    /**
      Returns AuralWarningSystem::NO_SOUND. No sound should be emitted when the ground spoilers are deployed (this is part of the normal procedures)
      */
    AuralWarningSystem::WarningSound getSound();

    /** Returns false. This message is not inhibited during takeoff. */
    bool isTakeoffIgnored();

    /** Returns false. This message is not inhibited during landing. */
    bool isLandingIgnored();
    
signals:
    
public slots:
    
};


}
}
#endif // GROUNDSPOILERSDEPLOYEDMESSAGE_H
