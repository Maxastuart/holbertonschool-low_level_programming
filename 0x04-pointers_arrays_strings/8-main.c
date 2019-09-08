#include "holberton.h"
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5];

	array[0] = INT_MAX;
	array[1] = INT_MIN;
	array[2] = 0;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
