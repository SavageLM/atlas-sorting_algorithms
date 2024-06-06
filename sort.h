#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Prototypes*/
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void merge(int *array, size_t left, size_t mid, size_t right);
void recursive_sort(int *array, size_t left, size_t right);

#endif
