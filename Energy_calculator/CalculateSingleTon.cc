#include "CalculateSingleTon.h"


void CalculateSingleTon::parameterUpdate(ParameterType& type, float& value)
{
  switch (static_cast<int>(type)) {
    case static_cast<int>(ParameterType::MASS) :
    {
      mass = value;
    }
    break;
    case static_cast<int>(ParameterType::SPEED) :
    {
      speed = value;
    }
    break;
  default:
    break;
  }
  recalculate();
}

void CalculateSingleTon::recalculate()
{
  energy = (static_cast<double>(mass)*(pow(static_cast<double>(speed),2)))/2;
  emit energyUpdated(energy);
}
