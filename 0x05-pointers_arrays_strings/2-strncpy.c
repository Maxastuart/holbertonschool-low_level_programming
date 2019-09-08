#include "holberton.h"

/**
 * *_strncpy - copies a string to a buffer
 * @dest: a character, the pointer to the buffer array
 * @src: a character, the pointer to the source array
 * @n: an integer, the maximum number of bytes to use from src
 *
 * Desription: like *_strcpy, but this only copies n number of bytes of the
 * source, and makes the extraneous array elements past the source's null
 * terminator null.
 *
 * Return: dest, the pointer to the destination (buffer) array.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
