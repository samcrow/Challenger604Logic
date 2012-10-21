#ifndef COLOR_H
#define COLOR_H

#include <QtGlobal>
#include <QDebug>
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
    Color(quint8 inRed, quint8 inGreen, quint8 inBlue);

    /** The red component of the color, 0-255 */
    quint8 red;
    /** The green component of the color, 0-255 */
    quint8 green;
    /** The blue component of the color, 0-255 */
    quint8 blue;

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

    //Debug support
    QDebug operator << (QDebug dbg);
};

#endif // COLOR_H
