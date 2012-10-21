#ifndef CASWARNINGMESSAGE_H
#define CASWARNINGMESSAGE_H

#include "casmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A CAS message with a priority level of WARNING

  <p>
  Warning messages turn on the master warning lights by default. Individual messages should
  override triggersMasterWarning() if they should not turn on the master warning lights.
  </p><p>
  Warning messages sound three attention-getting sounds by default. Individual messages
  can override getSound() to change this.
  </p><p>
  Warning messages display with an red color (defined by warningColor) by default. Individual
  messages can override getDisplayColor() to change this.
  </p>
  */
class CHALLENGER604LOGICSHARED_EXPORT CASWarningMessage : public CASMessage
{
    Q_OBJECT
public:
    explicit CASWarningMessage(QObject *parent = 0);

    Priority getPriority();

    /**
      Returns a red color associated with warning messages
      */
    virtual Color getDisplayColor();

    /** The red color, assoicated with warning messages */
    static const Color warningColor;
    
signals:
    
public slots:
    
};



}
}
#endif // CASWARNINGMESSAGE_H
