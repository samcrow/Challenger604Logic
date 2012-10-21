#include "casstatusmessage.h"

namespace Challenger604Systems {
namespace CAS {



CASStatusMessage::CASStatusMessage(QObject *parent) :
    CASMessage(parent)
{
}

CASMessage::Priority CASStatusMessage::getPriority() {
    return STATUS;
}

Color CASStatusMessage::getDisplayColor() {
    return Color::white();
}

}
}
