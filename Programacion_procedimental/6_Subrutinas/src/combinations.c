#include "combinations.h"

// function Combinations no repetition:
int_t combinations_no_repetition(const int_t n, const int_t r) {
  // return n! / (r!(n - r)!)
  // return factorial(n) / (factorial(r) * factorial(n - r));
	int_t result = 1;
	int_t max_denominator = MAX(r, n - r);
	for (int_t i = n; i > max_denominator; --i) {
		result *= i;
  }
	return result / factorial(MIN(r, n - r));
}

// function Combinations with repetition:
int_t combinations_with_repetition(const int_t n, const int_t r) {
  // return (n + r - 1)! / (r!(n - 1)!)
  // return factorial(n + r - 1) / (factorial(r) * factorial(n - 1));
 	int_t result = 1;
	int_t max_denominator = MAX(r, n - 1);
	for (int_t i = n + r - 1; i > max_denominator; --i) {
		result *= i;
  }
	return result / factorial(MIN(r, n - 1)); 
}