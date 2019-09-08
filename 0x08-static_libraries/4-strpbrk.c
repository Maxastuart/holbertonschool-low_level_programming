#include "holberton.h"

/**
 * _strpbrk - finds the first match in a string for any of a set of bytes.
 * @s: a pointer to a string, an array of characters.
 * @accept: a pointer to a string, the characters to find a match for.
 *
 * Return: pointer to byte in s that matches one of accept, otherwise 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a1;

	while (*s)
	{
		a1 = accept;
		while (*a1 && *s != *a1)
			a1++;
		if (*s != *a1)
			s++;
		else
			return (s);
	}

	return (0);
}
