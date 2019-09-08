#include "holberton.h"

/**
 * *_strncat - concatenates 2 strings, maximum n bytes from the source
 * @dest: a character, the pointer to the destination array
 * @src: a character, the pointer to the source array
 * @n: an integer, the maximum number of bytes to use from src
 *
 * Return: dest, the pointer to the destination array.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while ((j < n) && (src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
