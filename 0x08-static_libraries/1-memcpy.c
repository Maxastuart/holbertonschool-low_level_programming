#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the pointer to the destination array (type char)
 * @src: the pointer to the source array (type char)
 * @n: the number of array elements to replace.
 *
 * Return: char *dest, the original array address.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dst = dest;

	while (n-- != 0)
	{
		*dst++ = *src++;
	}
	return (dest);
}
