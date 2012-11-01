#include "flapsmotoroverheatmessage.h"

namespace Challenger604Systems {
namespace CAS {

FlapsMotorOverheatMessage::FlapsMotorOverheatMessage(QObject *parent) :
    CASStatusMessage(parent)
{
}

QString FlapsMotorOverheatMessage::getDisplayText(){
       return "FLAPS MOTOR OVHT";
}

}
}
