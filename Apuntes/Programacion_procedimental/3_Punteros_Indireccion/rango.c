#include <stdio.h>

// Subroutine declaration or Function prototype
void swap(int* value1, int* value2);

// main: Prints all integer values in range {min, min + 1, ..., max}
int main(void) {
  // Read min, max
  int min = 0, max = 0;
  if (scanf("%d %d", &min, &max) == 2) {
    // If min > max then
    if (min > max) {
      // Swap min with max
      swap(&min, &max);  // Arguments
    }

    // Repeat index from min to max inclusive do
    for (int index = min; index <= max; ++index) {
      // Print index
      printf("%d%c", index, (index == max ? '\n' : ' '));
    }
  }
  return 0;
}

// Swap <value1> with <value2>:
// int* value obtiene 
void swap(int* value1, int* value2) {  // Params: DataType varName = initValue 
  // Create a copy of value1
  const int value1_copy = *value1;     // *value desreferencia
  // Assign value1 as value2
  *value1 = *value2;
  // Assign value2 as the copy of value1
  *value2 = value1_copy;
}