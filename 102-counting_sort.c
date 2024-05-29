#include "sort.h"

/**
 * counting_sort - Implements a Count Sort algo
 * @array: array to sort
 * @size: size of array
*/
void counting_sort(int *array, size_t size)
{
	int max = 0, *c_array, *output;
	size_t i;

	if (!array || !size)
		return;
	for (i =0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	c_array = calloc(max + 1, sizeof(int));
	if (!c_array)
		return;
	for (i = 0; i < size; i++)
		c_array[array[i]]++;
	for (i = 1; i < (size_t)max + 1; i++)
		c_array[i] += c_array[i - 1];
	output = calloc(size, sizeof(int));
	if (!output)
		return;
	for (i = 0; i < size; i++)
	{
		output[c_array[array[i]] - 1] = array[i];
		/* c_array[array[i]]--; */
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	print_array(c_array, (size_t)max + 1);
	free(c_array);
	free(output);
}