#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of sequential integers
 * @min: first array element value
 * @max: last array element value
 *
 * Return: pointer to the array; NULL on error
 */
int *array_range(int min, int max)
{
	int *ar;
	unsigned int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == 0)
		return (NULL);
	for (i = 0; min <= max; min++)
		ar[i++] = min;
	return (ar);
}
