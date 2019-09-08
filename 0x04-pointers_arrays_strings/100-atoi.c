#include "holberton.h"

/**
 * _atoi - converts character string to integer
 * @s: a character string
 *
 * Return: an integer, the number converted.
 */
int _atoi(char *s)
{
	int i, res;

	for (i = 0; s[i]; i++)
		res = res * 10 + s[i] - '0';
	return (res);
}
