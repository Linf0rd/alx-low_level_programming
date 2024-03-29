#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_(int *array, size_t low, size_t high, int value);
void print_subarray(int *array, size_t low, size_t high);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
