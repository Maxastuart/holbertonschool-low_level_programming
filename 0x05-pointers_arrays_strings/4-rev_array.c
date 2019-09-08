#include "holberton.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: a string, an array of integers
 * @n: an integer, the number of array elements to reverse
 */
void reverse_array(int *a, int n)
{
	int tmp, len, high = 0, low = 0;

	for (len = 0; len < n; len++)
		;

	high = len - 1;

	while (high > low)
	{
		tmp = a[low];
		a[low] = a[high];
		a[high] = tmp;
		high--;
		low++;
	}
}
