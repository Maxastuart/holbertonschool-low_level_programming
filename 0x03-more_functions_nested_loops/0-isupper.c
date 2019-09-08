#include "holberton.h"

/**
 * _isupper - checks for an uppercase character
 * @c: ascii character
 *
 * Return: 1 if c is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
