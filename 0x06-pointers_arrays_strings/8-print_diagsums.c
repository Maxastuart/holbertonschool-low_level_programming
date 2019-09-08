#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagonal sums of a square array
 * @a: a pointer to a character array
 * @size: an integer, the number of columns and rows in the array
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[(i * 1) + (i * size)];

		diag2 = diag2 + a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", diag1, diag2);
}
