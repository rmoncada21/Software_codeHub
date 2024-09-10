#ifndef COMBINATORICS_H
#define COMBINATORICS_H

typedef unsigned long long int_t;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**
 * @brief 
 * 
 * @param n 
 * @return int_t 
 */
int_t factorial(const int_t n);
int_t pow_llu(const int_t n, const int_t exp);

#endif  // COMBINATORICS_H