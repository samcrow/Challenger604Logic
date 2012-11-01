#include "stabtrimfailmessage.h"



namespace Challenger604Systems {
namespace CAS {


StabTrimFailMessage::StabTrimFailMessage(QObject *parent) :
    CASCautionMessage(parent)
{
}

QString StabTrimFailMessage::getDisplayText() {
    return "STAB TRIM";
}

}
}
