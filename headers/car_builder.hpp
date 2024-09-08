#pragma once

#include "car.hpp"

#include <bitset>

class CarBuilder {
public:
  CarBuilder &WithBrandName(const std::string &brand_name);
  CarBuilder &WithModelName(const std::string &model_name);
  CarBuilder &WithProductionYear(unsigned production_year);
  CarBuilder &WithMileage(unsigned mileage);
  CarBuilder &WithMaxFuelLevel(unsigned max_fuel_level);
  CarBuilder &WithCurrentFuelLevel(unsigned current_fuel_level_);
  CarBuilder &WithCarState(CarState car_state);

  Car Build();

private:
  enum MandatoryValues {
    kBrandName = 0,
    kModelName,
    kProductionYear,
    kMileage,
    kMaxFuelLevel,

    Count
  };
  std::bitset<MandatoryValues::Count> mandatory_values_;

  Car car_;
};