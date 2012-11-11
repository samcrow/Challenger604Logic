#ifndef COLOR_H
#define COLOR_H

#include <stdint.h>

#include "../Challenger604Logic_global.h"

/**
  @brief Stores an RGB color
  */
class CHALLENGER604LOGICSHARED_EXPORT Color
{
public:

    /**
      @brief Constructor that accepts red, blue, and green color values, each from 0 to 255
      @param inRed The red component
      @param inGreen The green component
      @param inBlue The blue component
      */
    Color(uint8_t inRed, uint8_t inGreen, uint8_t inBlue);

    /** The red component of the color, 0-255 */
    uint8_t red;
    /** The green component of the color, 0-255 */
    uint8_t green;
    /** The blue component of the color, 0-255 */
    uint8_t blue;

    /**
      @brief Check if two colors are equal to each other
      @return True if both colors have the same red, green, and blue values, otherwise false
      */
    bool operator == (Color other);

    /**
      @brief Create a color representing white

      This will have red, green, and blue values of 255.
      */
    static Color white();
};

#endif // COLOR_H
