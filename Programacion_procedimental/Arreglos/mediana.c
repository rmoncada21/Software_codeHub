#include <stdio.h>
#include <stdlib.h>


/* Usando macros, se usa saimbolos del preprocesador 
    C enumera los valores automaticamente
    Exit succes tiene un valor de cero, se agrega con la libreria de stdlib.h
*/

// #define ERROR_READ_VALUE_COUNT 1
// const int ERROR_READ_VALUE_COUNT = 1;
enum error_t {  // unsigned int
  ERROR_SUCCESS = EXIT_SUCCESS,
  ERROR_READ_VALUE_COUNT,
  ERROR_READ_VALUES,
};

enum error_t read_values(const size_t value_count, double values[value_count]);
int compare_double(const void* p1, const void* p2);
double calculate_median(const size_t value_count, const double* const values);

// procedure main:
int main(void) {
  enum error_t error = ERROR_SUCCESS;
  // Read value count
  size_t value_count = 0;
  if (scanf("%zu", &value_count) == 1) { 
    // Read values as an array of value count of real numbers
    double values[value_count];
    error = read_values(value_count, values);
    if (error == ERROR_SUCCESS) {
      // Sort values
      qsort(values, value_count, sizeof(double), compare_double);      
      // Create median as the result of calculate the median of values
      const double median = calculate_median(value_count, values);
      // Print median
      printf("%.2lf\n", median);
    } else {
      fprintf(stderr, "median: error: could not read values\n");
    }
  } else {
    fprintf(stderr, "median: error: could not read value count\n");
    error = ERROR_READ_VALUE_COUNT;
  }
  
  return error;
}

// enum error_t read_values(const size_t value_count, double* values);
// enum error_t read_values(const size_t value_count, double values[]);
enum error_t read_values(const size_t value_count, double values[value_count]) {
  for (size_t index = 0; index < value_count; ++index) {
    /* Ambas expresiones son los misma
    // if (scanf("%lg", &values[index]) != 1) { */
    if (scanf("%lg", values + index) != 1) {
      return ERROR_READ_VALUES;
    }
  }
  return ERROR_SUCCESS;
}


/* SE hizo es tarutina debido a la funcion qsort */
int compare_double(const void* p1, const void* p2) {   /*  */
  // const double* value1 = (const double*)p1;
  // const double* value2 = (const double*)p2;
  // return *value1 - *value2;
  return *(const double*)p1 - *(const double*)p2;
}

// function Calculate the median of values
double calculate_median(const size_t value_count, const double* const values) {  /* values es un vector */
  // If value count is odd then
  if (value_count % 2 == 1) {
    // Return value at the center of values
    return values[value_count / 2];
  } else {
    // Return the average of the two values at the center of values
    return (values[value_count / 2 - 1] + values[value_count / 2]) / 2.0;
  }
}