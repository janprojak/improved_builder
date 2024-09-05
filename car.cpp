#include "car.hpp"

const std::string &Car::GetBrandName() const { return brand_name_; }
const std::string &Car::GetModelName() const { return model_name_; }

unsigned Car::GetProductionYear() const { return production_year_; }
unsigned Car::GetMileage() const { return mileage_; }
unsigned Car::GetMaxFuelLevel() const { return max_fuel_level_; }
unsigned Car::GetCurrentFuelLevel() const { return current_fuel_level_; }

CarState Car::GetState() const { return state_; }

bool Car::SetCurrentFuelLevel(unsigned new_current_fuel_level) {
  if (new_current_fuel_level > max_fuel_level_) {
    return false;
  }

  current_fuel_level_ = new_current_fuel_level;

  return true;
}

bool Car::Drive() {
  if (state_ == CarState::kDriving) {
    return false;
  }

  if (current_fuel_level_ == 0) {
    return false;
  }

  if ((static_cast<int>(current_fuel_level_) - 2) <= 0) {
    return false;
  }

  state_ = CarState::kDriving;
  mileage_ += 10;
  current_fuel_level_ -= 2;

  return true;
}

bool Car::Stop() {
  if (state_ == CarState::kStopped) {
    return false;
  }

  state_ = CarState::kStopped;

  return true;
}

std::ostream &operator<<(std::ostream &out, const Car &car) {
  return out << "Car{brand_name: " << car.GetBrandName()
             << ", model_name: " << car.GetModelName()
             << ", production_year: " << car.GetProductionYear()
             << ", mileage: " << car.GetMileage()
             << ", max_fuel_level: " << car.GetMaxFuelLevel()
             << ", current_fuel_level: " << car.GetCurrentFuelLevel()
             << ", state: " << car.GetState() << "}";
}