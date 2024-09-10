#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "combinations.h"
#include "permutations.h"

#define INT_T "llu" //para long long sin signo el INT_T para hacer el código reutilizable



/**
 * @brief 
 * 
 * @param n 
 * @param r 
 */
void print_combinatorics_table(int_t n, int_t r);

/**
 * @brief
 * @see print_combinatorics_table for params documentation
 */
void print_permutations_row(int_t n, int_t r);
void print_combinations_row(int_t n, int_t r);


// main:
int main(void) {
  // Read n, r
  int_t n = 0, r = 0;
  if (scanf("%" INT_T " %" INT_T, &n, &r) == 2) { //el INT_T para hacer el código reutilizable
    // Print combinatorics table
    print_combinatorics_table(n, r);
  }
  return EXIT_SUCCESS;
}

// procedure Print combinatorics table:
void print_combinatorics_table(int_t n, int_t r) {
  // Print header
  puts("                   No repetitions     With repetitions");
  // Print permutations row
  print_permutations_row(n, r);
  // Print combinations row
  print_combinations_row(n, r);
}

// procedure Print permutations row:
void print_permutations_row(int_t n, int_t r) {
  // Print "Permutations" header
  printf("Permutations");
  // Print permutations no repetition
  printf(" %20" INT_T, permutations_no_repetition(n, r));
  // Print permutations with repetition
  printf(" %20" INT_T "\n", permutations_with_repetition(n, r));
}

// procedure Print combinations row:
void print_combinations_row(int_t n, int_t r) {
  // Print "combinations" header
  printf("Combinations");
  // Print combinations no repetition
  printf(" %20" INT_T, combinations_no_repetition(n, r));
  // Print combinations with repetition
  printf(" %20" INT_T "\n", combinations_with_repetition(n, r));
}