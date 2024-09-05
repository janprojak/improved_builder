#pragma once

#include "car.hpp"

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
  Car car_;
};