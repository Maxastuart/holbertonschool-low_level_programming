#include "search_algos.h"

/**
 * linear_search - searches for a value in an int array via Linear search
 *
 * @array: the list to search through
 * @size: length of (number of elements in) the array
 * @value: the value to search for
 *
 * Return: the index of first value match, -1 if not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
