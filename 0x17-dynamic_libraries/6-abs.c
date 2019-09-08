#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @i: an integer
 * Return: int
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
