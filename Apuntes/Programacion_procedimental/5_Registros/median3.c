#include <stdio.h>
#include <stdlib.h>

#include "array.h"

// #define ERROR_READ_VALUE_COUNT 1
// const int ERROR_READ_VALUE_COUNT = 1;
enum error_t {  // unsigned int
  ERROR_SUCCESS = EXIT_SUCCESS,
  ERROR_READ_VALUE_COUNT,
  ERROR_READ_VALUES,
  ERROR_NO_ENOUGH_MEMORY,
};

enum error_t read_values(struct array* const values);
int compare_double(const void* p1, const void* p2);
double calculate_median(const struct array* const values);

// procedure main:
int main(void) {
  enum error_t error = ERROR_SUCCESS;
  // Read values as an array of value count of real numbers
  // array_t values = {0, 0, NULL};
  struct array values;
  if (array_init(&values) == EXIT_SUCCESS) {
    error = read_values(&values);
    if (error == ERROR_SUCCESS) {
      // Sort values
      qsort(values.elements, values.count, sizeof(double), compare_double);
      // Create median as the result of calculate the median of values
      const double median = calculate_median(&values);
      // Print median
      printf("%.2lf\n", median);
    } else {
      fprintf(stderr, "median: error: could not read values\n");
    }
    array_uninit(&values);
  } else {
    fprintf(stderr, "median: error: could not allocate memory\n");
    error = ERROR_NO_ENOUGH_MEMORY;
  }
  return error;
}

enum error_t read_values(struct array* const values) {
  double value = 0.0;
  while (scanf("%lg", &value) == 1) {
    if (array_append(values, value) == EXIT_FAILURE) {
      return ERROR_READ_VALUES;
    }
  }
  return ERROR_SUCCESS;
}

int compare_double(const void* p1, const void* p2) {
  // const double* value1 = (const double*)p1;
  // const double* value2 = (const double*)p2;
  // return *value1 - *value2;
  return *(const double*)p1 - *(const double*)p2;
}

// function Calculate the median of values
double calculate_median(const struct array* const values) {
  // If value count is odd then
  if ((*values).count % 2 == 1) {
    // Return value at the center of values
    return values->elements[values->count / 2];
  } else {
    // Return the average of the two values at the center of values
    return (values->elements[values->count / 2 - 1]
      + values->elements[values->count / 2]) / 2.0;
  }
}