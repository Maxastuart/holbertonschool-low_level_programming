#include "holberton.h"

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
