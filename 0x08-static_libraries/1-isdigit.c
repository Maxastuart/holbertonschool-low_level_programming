#include "holberton.h"

/**
 * _isdigit - checks for a digit character
 * @c: ascii character
 *
 * Return: 1 if c is a digit, 0 if not.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
