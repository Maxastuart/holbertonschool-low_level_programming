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
 * pivot - swaps values until all lower than 'end' are at lower index points
 * @array: pointer to an array of integers
 * @size: the number of elements in the array
 * @begin: the lowest index to sort from
 * @end: the highest index to sort to
 *
 * Return: the new index of the pivot value.
 */
size_t pivot(int *array, size_t size, size_t begin, size_t end)
{
	size_t i, cursor = begin;
	int pivot_val = array[end];

	for (i = begin; i <= end; i++)
	{
		if (array[i] < pivot_val)
		{
			if (cursor != i)
			{
				swap_int(&array[i], &array[cursor]);
				print_array(array, size);
			}
			cursor++;
		}
	}
	if (end != cursor)
	{
		swap_int(&array[end], &array[cursor]);
		print_array(array, size);
	}
	return (cursor);
}

/**
 * qs_recur - recursively calls itself on shorter sections of the array
 * @array: pointer to an array of integers
 * @size: the number of elements in the array
 * @begin: the lowest index to sort from
 * @end: the highest index to sort to
 */
void qs_recur(int *array, size_t size, size_t begin, size_t end)
{
	size_t pivot_idx;

	if (begin < end)
	{
		pivot_idx = pivot(array, size, begin, end);

		if (pivot_idx > begin && pivot_idx <= end)
			qs_recur(array, size, begin, pivot_idx - 1);
		if (pivot_idx >= begin && pivot_idx < end)
			qs_recur(array, size, pivot_idx + 1, end);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order by recursively
 * @array: pointer to an array of integers
 * @size: the number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qs_recur(array, size, 0, size - 1);
}
