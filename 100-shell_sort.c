#include "sort.h"

/**
 * shell_sort -  implementation of a shell sort algorithm
 * @array: array to sort
 * @size: size of array
*/
void shell_sort(int *array, size_t size)
{
	size_t i, j, inc = 1, count = 0;
	int tmp, flag = 0;

	while (inc < size)
		inc = (3 * inc + 1);

	for (; inc >= 1; inc = inc / 3)
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
		if (flag)
		{
			for (count = 0; count < size; count++)
			{
				if (count == 0)
					printf("%d", array[count]);
				else
					printf(", %d", array[count]);
			}
			putchar('\n');
		}
		flag = 1;
	}
}
