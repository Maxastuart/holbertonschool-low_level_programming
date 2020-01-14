#include "search_algos.h"

/**
 * binary_search - searches for a value in an int array via Binary search
 *
 * @array: the list to search through
 * @size: length of (number of elements in) the array
 * @value: the value to search for
 *
 * Return: the index of first value match, -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, midpoint, first = 0, last = size - 1;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: %d", array[first]);
		for (i = first + 1; i <= last; i++)
			printf(", %d", array[i]);
		printf("\n");

		midpoint = (first + last) / 2;

		if (value == array[midpoint])
			return (midpoint);
		else if (value > array[midpoint])
			first = midpoint + 1;
		else
			last = midpoint - 1;
	}

	return (-1);
}
