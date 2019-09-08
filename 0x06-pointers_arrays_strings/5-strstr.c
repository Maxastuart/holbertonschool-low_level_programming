#include "holberton.h"

/**
 * _strstr - finds the first full match of a string in a string.
 * @haystack: a pointer to a string, an array of characters.
 * @needle: a pointer to a string, the characters to find a match for.
 *
 * Return: byte in haystack that matches the first one of needle, otherwise 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n1, *h1;

	while (*haystack)
	{
		n1 = needle;
		/* looks for a match to first char of needle */
		for (h1 = haystack; *h1 && *h1 == *n1; h1++)
		{
			/* check that all subsequent chars of needle match */
			if (*n1 && *h1 == *n1)
				n1++;
		}
		/* if all match, returns the first byte they matched */
		if (!(*n1))
			return (haystack);
		haystack++;
	}

	return (0);
}
