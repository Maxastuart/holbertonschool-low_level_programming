#include "holberton.h"

/**
 * *leet - converts characters aeotl & AEOTL into 43071 in a string
 * @s: an array of characters
 *
 * Return: char, the pointer to the array
 */
char *leet(char *s)
{
	char *p, *ap1, *ap2, a1[] = "aAeEoOtTlL", a2[] = "4433007711";

	p = s;
	while (*s)
	{
		ap1 = &a1[0];
		ap2 = &a2[0];
		while (*ap1)
		{
			if (*s == *ap1)
				*s = *ap2;
			ap1++;
			ap2++;
		}
		s++;
	}

	return (p);
}
