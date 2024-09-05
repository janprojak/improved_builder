#include "car_builder.hpp"

#include <iostream>
#include <ostream>
#include <sstream>

int main() {

  const Car car = CarBuilder()
                      .WithBrandName("Fiat")
                      .WithModelName("Tipo")
                      .WithProductionYear(2016)
                      .WithMileage(0)
                      .WithMaxFuelLevel(45)
                      .WithCurrentFuelLevel(0)
                      .WithCarState(CarState::kStopped)
                      .Build();

  const auto expected_result = "Car{brand_name: Fiat"
                               ", model_name: Tipo"
                               ", production_year: 2016"
                               ", mileage: 0"
                               ", max_fuel_level: 45"
                               ", current_fuel_level: 0"
                               ", state: stopped"
                               "}";

  std::stringstream string_stream;
  string_stream << car;

  if (string_stream.str() == expected_result) {
    std::cout << "PASSED" << std::endl;
  } else {
    std::cerr << "FAILED\n";
    std::cerr << "EXPECTED:\n";
    std::cerr << expected_result << "\n";
    std::cerr << "ACTUAL:\n";
    std::cerr << car << std::endl;
  }

  return 0;
}