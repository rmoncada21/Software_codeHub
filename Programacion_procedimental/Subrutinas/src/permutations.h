#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#include "combinatorics.h"

/**
 * @brief 
 * 
 * @param n 
 * @param r 
 * @remark If r > n returns 0
 * @return int_t 
 */
int_t permutations_no_repetition(const int_t n, const int_t r);

/**
 * @brief 
 * 
 * @param n 
 * @param r 
 * @return int_t 
 */
int_t permutations_with_repetition(const int_t n, const int_t r);

#endif  // PERMUTATIONS_H