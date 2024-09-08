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
  unsigned production_year_{0u};
  unsigned max_fuel_level_{0u};
  unsigned mileage_{0u};
  unsigned current_fuel_level_{0u};
  CarState state_{CarState::kStopped};
};

std::ostream &operator<<(std::ostream &out, const Car &car);