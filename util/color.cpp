#include "color.h"

Color::Color(quint8 inRed, quint8 inGreen, quint8 inBlue)
{
    red = inRed;
    green = inGreen;
    blue = inBlue;
}

bool Color::operator == (Color other) {
    return this->red == other.red && this->green == other.green && this->blue == other.blue;
}

Color Color::white() {
    return Color(255, 255, 255);
}
