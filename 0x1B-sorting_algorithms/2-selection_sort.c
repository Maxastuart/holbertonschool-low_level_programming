#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to an array of integers
 * @size: the number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum, temp;

	for (i = 0; i < size; i++)
	{
		minimum = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
				minimum = j;
		}
		if (array[i] > array[minimum])
		{
			temp = array[i];
			array[i] = array[minimum];
			array[minimum] = temp;
			print_array(array, size);
		}
	}
}
