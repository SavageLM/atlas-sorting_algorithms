#include "sort.h"

/**
 * shell_sort -  implementation of a shell sort algorithm
 * @array: array to sort
 * @size: size of array
*/
void shell_sort(int *array, size_t size)
{
	size_t i, j, inc = 1, count = 0;
	int tmp;

	if (!array || !size)
		return;
	while (inc < size)
		inc = (3 * inc + 1);

	for (inc /= 3; inc >= 1; inc = inc / 3)
	{
		for (i = inc; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= inc; j -= inc)
			{
				if (tmp < array[j - inc])
					array[j] = array[j - inc];
				else
					break;
			}
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
