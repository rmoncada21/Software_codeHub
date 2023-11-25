#include <assert.h>
#include <stdlib.h>

#include "array.h"

#define INITIAL_CAPACITY 10
#define INCREASE_FACTOR  10

/**
 * @brief (private)
 * 
 * @param array 
 * @return int 
 */
int increase_capacity(struct array* array);


int array_init(struct array* array) {
  assert(array); // recibe una condición 
  int error = EXIT_SUCCESS;
  array->count = 0;
  array->capacity = INITIAL_CAPACITY;
  array->elements = (double*) calloc(array->capacity, sizeof(double));
  if (array->elements == NULL) {
    array->capacity = 0;
    error = EXIT_FAILURE;
  }
  return error;
}

int array_uninit(struct array* array) {
  assert(array);
  free(array->elements);
  array->count = array->capacity = 0;
  return EXIT_SUCCESS;
}

int array_append(struct array* array, const double element) {
  assert(array);
  int error = EXIT_SUCCESS;
  if (array->count == array->capacity) {
    error = increase_capacity(array);
  }
  if (error == EXIT_SUCCESS) {
    array->elements[array->count++] = element;
  }
  return error;
}

int increase_capacity(struct array* array) {
  assert(array);
  int error = EXIT_SUCCESS;
  size_t new_capacity = INCREASE_FACTOR * array->capacity;
  double* new_elements = (double*) calloc(new_capacity, sizeof(double));
  if (new_elements) {
    for (size_t index = 0; index < array->count; ++index) {
      new_elements[index] = array->elements[index];
    }
    free(array->elements);
    array->elements = new_elements;
    array->capacity = new_capacity;
  } else {
    error = EXIT_FAILURE;
  }
  return error;
}
