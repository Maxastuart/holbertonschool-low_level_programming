#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - creates (allocates the memory for) a grid of integers
 * @height: the number of first dimension array elements
 * @width: the number of second dimension array elements
 *
 * Return: the pointer to the new array, or 0 on error
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ar;

	if (width < 1 || height < 1)
		return (0);
	ar = (int **)malloc(height * sizeof(int *));
	if (ar == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));
		if (ar[i] == 0)
		{
			for (i--; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}
	/* put 0 in each */
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ar[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ar);
}
