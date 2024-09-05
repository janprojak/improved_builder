#pragma once

#include "car_state.hpp"

#include <ostream>
#include <string>

class CarBuilder;

class Car {
public:
  const std::string &GetBrandName() const;
  const std::string &GetModelName() const;

  unsigned GetProductionYear() const;
  unsigned GetMileage() const;
  unsigned GetMaxFuelLevel() const;
  unsigned GetCurrentFuelLevel() const;

  CarState GetState() const;

  bool SetCurrentFuelLevel(unsigned new_current_fuel_level);
  bool Drive();
  bool Stop();

private:
  friend class CarBuilder;
  Car() = default;

  std::string brand_name_;
  std::string model_name_;
  unsigned production_year_;
  unsigned max_fuel_level_;
  unsigned mileage_;
  unsigned current_fuel_level_;
  CarState state_;
};

std::ostream &operator<<(std::ostream &out, const Car &car);