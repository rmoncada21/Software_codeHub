#include "combinatorics.h"

int_t factorial(const int_t n) {
  // Taken from http://...
  // Adapted from http://...
  /// @see http://...
  int_t result = 1;
  for (int_t counter = 2; counter <= n; ++counter) {
    result *= counter;
  }
  return result;
}

int_t pow_llu(const int_t n, const int_t exp) {
  int_t result = 1;
  for (int_t counter = 1; counter <= exp; ++counter) {
    result *= n;
  }
  return result;
}