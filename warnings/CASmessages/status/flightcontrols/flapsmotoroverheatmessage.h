#ifndef FLAPSMOTOROVERHEATMESSAGE_H
#define FLAPSMOTOROVERHEATMESSAGE_H

#include "../../../casstatusmessage.h"

namespace Challenger604Systems {
namespace CAS {

/**
  @brief A message that indicates that a single flaps motor has overheated

  In this condition, the flaps operate at half speed (each side has two motors)
  */
class FlapsMotorOverheatMessage : public CASStatusMessage
{
    Q_OBJECT
public:
    explicit FlapsMotorOverheatMessage(QObject *parent = 0);

    QString getDisplayText();
    
signals:
    
public slots:
    
};

}
}
#endif // FLAPSMOTOROVERHEATMESSAGE_H
