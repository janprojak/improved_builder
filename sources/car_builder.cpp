#include "car_builder.hpp"
#include "car.hpp"

#include <cassert>

CarBuilder &CarBuilder::WithBrandName(const std::string &brand_name) {
  car_.brand_name_ = brand_name;
  mandatory_values_.set(MandatoryValues::kBrandName);

  return *this;
}

CarBuilder &CarBuilder::WithModelName(const std::string &model_name) {
  car_.model_name_ = model_name;
  mandatory_values_.set(MandatoryValues::kModelName);

  return *this;
}

CarBuilder &CarBuilder::WithProductionYear(unsigned production_year) {
  car_.production_year_ = production_year;
  mandatory_values_.set(MandatoryValues::kProductionYear);

  return *this;
}

CarBuilder &CarBuilder::WithMileage(unsigned mileage) {
  car_.mileage_ = mileage;
  mandatory_values_.set(MandatoryValues::kMileage);

  return *this;
}

CarBuilder &CarBuilder::WithMaxFuelLevel(unsigned max_fuel_level) {
  assert(max_fuel_level != 0 && "max_fuel_level_ must be bigger that zero");

  car_.max_fuel_level_ = max_fuel_level;
  mandatory_values_.set(MandatoryValues::kMaxFuelLevel);

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
  assert(mandatory_values_.all() &&
         "Not all mandatory values were set for car creation.");

  return car_;
}