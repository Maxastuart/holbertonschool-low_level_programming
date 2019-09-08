#include "holberton.h"

/**
 * _pow_recursion - calculates a power with only recursion
 * @x: the base integer
 * @y: the power to raise it to
 *
 * Return: an integer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
