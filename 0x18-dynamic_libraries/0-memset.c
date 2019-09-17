#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory pointed to with the char b.
 * @s: a pointer, an array of characters.
 * @b: the character to replace others in the array.
 * @n: the number of array elements to replace.
 *
 * Return: char *s, the original array address.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *su = s;

	while (n-- != 0)
	{
		*su = b;
		su++;
	}
	return (s);
}
