#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees memory of a grid of integers
 * @grid: the pointer to the integer array
 * @height: the number of first dimension array elements
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
