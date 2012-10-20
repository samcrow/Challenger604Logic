#ifndef ELECTRICALPOWERTYPE_H
#define ELECTRICALPOWERTYPE_H

/**
  @file electricalpowertype.h
  @brief Contains an enum for types of electrical power
  */

namespace Challenger604Systems {

/**
  @enum ElectricalPowerType
  @brief An enumeration of different types of electricity.
  Note that all voltage and frequency values here are nominal.
  The actual values may be different
  */
enum ElectricalPowerType {

    /**
      DC electricity with an unknown voltage
      */
    DC_OTHER,

    /**
      DC electricity at 12 volts
      */
    DC_12V,

    /**
      DC electricty at 28 volts
      */
    DC_28V,

    /**
      AC electricity with an unkown voltage and frequency
      */
    AC_OTHER,

    /**
      AC electricity at 400 hertz with a voltage of 115 volts.
      This is the primary type of AC electricity on the aircraft.
      */
    AC_115V_400HZ
};

}

#endif // ELECTRICALPOWERTYPE_H
