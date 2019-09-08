#include "holberton.h"

int helper_sqrt(int n, int x);

/**
 * _sqrt_recursion - calculates a natural square root with only recursion
 * @n: an integer, the number to find the square root of
 *
 * Return: integer -1 if prime or negative, 0 if 0, otherwise the square root
 */
int _sqrt_recursion(int n)
{
	int x = 2;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helper_sqrt(n, x));
}


/**
 * helper_sqrt - a helper function using 2 variables to recursively find sqrt
 * @n: an integer, the number to find the square root of
 * @x: an integer, the variable to divide n by and increment
 *
 * Return: integer x after reduced to closest natural square root of n.
 */
int helper_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);

	return (helper_sqrt(n, ++x));
}
