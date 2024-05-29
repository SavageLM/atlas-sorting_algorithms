#include "sort.h"

/**
 * shell_short -  implementation of a shell sort algorithm
 * @array: array to sort
 * @size: size of array
*/
void shell_sort(int *array, size_t size)
{
	size_t i, j, increment, count = 0;
	int tmp;

    for (increment = size / 2; increment > 0; increment /= 2)
	{
        for (i = increment; i < size; i++)
		{
            tmp = array[i];
            for (j = i; j >= increment; j -= increment)
			{
                if (tmp < array[j - increment])
                    array[j] = array[j - increment];
                else 
                    break;
            }
            array[j] = tmp;
        }
		for (count = 0; count < size; count++)
		{
			if (count == 0)
				printf("%d", array[count]);
			else
				printf(", %d", array[count]);
		}
		putchar('\n');
	}
}
