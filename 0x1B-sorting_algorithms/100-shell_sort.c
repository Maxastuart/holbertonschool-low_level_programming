#include "sort.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
	int a1;

	a1 = *a;
	*a = *b;
	*b = a1;
}

/**
 * shell_sort - sorts an array of integers in ascending order
 * @array: pointer to an array of integers
 * @size: the number of elements in the array
 */
void shell_sort(int *array, size_t size)
{

	size_t i, n, interval = 1;

	while (interval < size / 3)
	{ /* This is the Knuth Sequence */
		interval = interval * 3 + 1;
	}

	while (interval > 0 && size > 1)
	{
		for (i = interval; i < size; i++)
		{
			for (n = i;
			     n > interval - 1 && array[n - interval] > array[n];
			     n -= interval)
			{
				swap_int(&array[n], &array[n - interval]);
			}
		}
		interval--;
		interval = interval / 3;
		print_array(array, size);
	}


}
