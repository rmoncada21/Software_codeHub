#include <stdio.h>
#include <stdlib.h>

double global_array[10];


void print_global_array(void) {
  for (size_t index = 0; index < 10; ++index) {
    printf("%zu: %lf\n", index + 1, global_array[index]);
  }
}



//compilacion condicional
#if 0
int print_static_array_n(const size_t count) {
  static double static_array[count];
  for (size_t index = 0; index < count; ++index) {
    printf("%zu: %lf\n", index + 1, static_array[index]);
  }
}
#endif

void print_automatic_array(void) {
  double auto_array[10];
  for (size_t index = 0; index < 10; ++index) {
    printf("%zu: %lf\n", index + 1, auto_array[index]);
  }
}


void print_automatic_array_n(const size_t count) {
  double auto_array[count];
  for (size_t index = 0; index < count; ++index) {
    printf("%zu: %lf\n", index + 1, auto_array[index]);
  }
}

void print_heap_array_n(const size_t count) {
  double* auto_array = calloc(count, sizeof(double));
  for (size_t index = 0; index < count; ++index) {
    printf("%zu: %lf\n", index + 1, auto_array[index]);
  }
}



int main(int argc, char* argv[]) {
  size_t count = 10;
  if (argc == 2) {
    sscanf(argv[1], "%zu", &count);
  }
  // print_global_array();
  // print_automatic_array();
  // print_static_array_n(count);
  // print_automatic_array_n(count);
  print_heap_array_n(count);
}