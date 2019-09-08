#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints an array of digits
 * @a: an integer, an array of digits
 * @n: an integer, the number of array elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
