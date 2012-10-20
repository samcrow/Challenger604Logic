#ifndef FUELSINK_H
#define FUELSINK_H

namespace Challenger604Systems {
/**
  @namespace Fuel
  @brief Contains things related to the aircarft's fuel systems
  */
namespace Fuel {

/**
  @brief An interface for anything that consumes fuel.
  All fuel flow rates, unless otherwise noted, are in kilograms per hour.
  */
class FuelSink
{
public:
    FuelSink();

    /**
      Get the rate of fuel consumption, in kilograms per hour, that
      this device is attempting to consume
      */
    virtual double getTargetInputRate() = 0;

    /**
      Get the rate of fuel consumption, in kilograms per hour, that
      this device is actaully consuming.
      */
    virtual double getActualInputRate() = 0;
};

}
}

#endif // FUELSINK_H
