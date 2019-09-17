#include "holberton.h"

/**
 * _strspn - counts the number of bytes of a string matching another string.
 * @s: a pointer to a string, an array of characters.
 * @accept: the  string of character to count in s.
 *
 * Return: the number of bytes of s in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *s1 = s, *a1;

	while (*s1)
	{
		a1 = accept;
		while (*a1 && *s1 != *a1)
			a1++;
		if (*s1 == *a1)
			s1++;
		else
			return (s1 - s);
	}

	return (0);
}
