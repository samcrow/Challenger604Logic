#include "color.h"

Color::Color(uint8_t inRed, uint8_t inGreen, uint8_t inBlue)
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
