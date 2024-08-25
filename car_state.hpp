#pragma once

#include <cassert>
#include <ostream>

enum CarState { kDriving = 0, kStopped };

inline std::ostream &operator<<(std::ostream &out, CarState car_state) {
  switch (car_state) {

  case CarState::kDriving:
    return out << "driving";

  case CarState::kStopped:
    return out << "stopped";

  default:
    assert(false && "Need to handle new CarState value.");
  }
}