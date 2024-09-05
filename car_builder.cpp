#include "car_builder.hpp"
#include "car.hpp"

#include <stdexcept>

CarBuilder &CarBuilder::WithBrandName(const std::string &brand_name) {
  car_.brand_name_ = brand_name;

  return *this;
}

CarBuilder &CarBuilder::WithModelName(const std::string &model_name) {
  car_.model_name_ = model_name;

  return *this;
}

CarBuilder &CarBuilder::WithProductionYear(unsigned production_year) {
  car_.production_year_ = production_year;

  return *this;
}

CarBuilder &CarBuilder::WithMileage(unsigned mileage) {
  car_.mileage_ = mileage;

  return *this;
}

CarBuilder &CarBuilder::WithMaxFuelLevel(unsigned max_fuel_level) {
  car_.max_fuel_level_ = max_fuel_level;

  return *this;
}

CarBuilder &CarBuilder::WithCurrentFuelLevel(unsigned current_fuel_level_) {
  car_.current_fuel_level_ = current_fuel_level_;

  return *this;
}

CarBuilder &CarBuilder::WithCarState(CarState car_state) {
  car_.state_ = car_state;

  return *this;
}

Car CarBuilder::Build() {

  if (car_.max_fuel_level_ == 0) {
    throw std::logic_error("max_fuel_level_ must be bigger that zero");
  }

  return car_;
}