#include <stdio.h>
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
 * bubble_sort - sorts an array of integers in ascending order
 * @array: pointer to an array of integers
 * @size: the number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i, x = size;

	while (swapped == 1)
	{
		swapped = 0;
		for (i = 1; i < x; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap_int(&array[i - 1], &array[i]);
				swapped = 1;
				print_array(array, size);
			}
		}
		x--;
	}

}
