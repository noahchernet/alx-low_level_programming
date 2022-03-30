#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include "stdio.h"
#include "math.h"

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int lower_bound, int upper_bound);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int power(int base, int exponent);

#endif /* SEARCH_ALGOS */
