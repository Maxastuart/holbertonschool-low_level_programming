#include "holberton.h"

/**
 * factorial - calculates a factorial with only recursion
 * @n: an integer
 *
 * Return: an integer.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
