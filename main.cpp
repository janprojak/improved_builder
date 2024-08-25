#include "car.hpp"

#include <iostream>
#include <sstream>

int main() {
  const Car car{"Fiat", "Tipo", 2016 /*production_year*/, 0 /*mileage*/,
                45 /*max_fuel_level*/};

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
    std::cerr << "FAILED" << std::endl;
  }

  return 0;
}