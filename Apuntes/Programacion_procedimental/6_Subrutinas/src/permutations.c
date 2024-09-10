#include "permutations.h"

// function Permutations with repetition:
int_t permutations_with_repetition(const int_t n, const int_t r) {
  // return n^r
  // return pow(n, r);
  return pow_llu(n, r);
}

// function Permutations no repetition:
// Código optimizado
int_t permutations_no_repetition(const int_t n, const int_t r) {
  // return n! / (n - r)!
  // return factorial(n) / factorial(n - r);
  // ...
  int_t result = 1;
  if (n >= r) {
    for (int_t count = n; count > n - r; --count) {
      result *= count;
    }
  } else {
    result = 0;
  }
  return result;
}