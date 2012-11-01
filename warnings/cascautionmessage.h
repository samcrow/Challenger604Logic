#ifndef CASCAUTIONMESSAGE_H
#define CASCAUTIONMESSAGE_H

#include "casmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A CAS message with a priority level of CAUTION

  <p>
  Caution messages are inhibited (ignored) by default during takeoff and landing.
  Individual messages should override isTakeoffIgnored() and isLandingIgnored() if they
  are not ignored during takeoff and/or landing.
  </p><p>
  Caution messages turn on the master caution lights by default. Individual messages should
  override triggersMasterCaution() if they should not turn on the master caution lights.
  </p><p>
  Caution messages sound a single attention-getting sound by default. Individual messages
  can override getSound() to change this.
  </p><p>
  Caution messages display with an amber color (defined by cautionColor) by default. Individual
  messages can override getDisplayColor() to change this.
  </p>
  */
class CHALLENGER604LOGICSHARED_EXPORT CASCautionMessage : public CASMessage
{
    Q_OBJECT
public:
    explicit CASCautionMessage(QObject *parent = 0);

    Priority getPriority();

    virtual bool isTakeoffIgnored();

    virtual bool isLandingIgnored();

    virtual bool triggersMasterCaution();

    virtual AuralWarningSystem::WarningSound getSound();

    /**
      An amber color used to display caution messages
      */
    static const Color cautionColor;
    
signals:
    
public slots:
    
};



}
}
#endif // CASCAUTIONMESSAGE_H
