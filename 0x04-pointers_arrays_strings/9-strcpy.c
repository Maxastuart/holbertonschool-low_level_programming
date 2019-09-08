#include "holberton.h"

/**
 * *_strcpy - copies a string to a buffer
 * @dest: a character, the pointer to the buffer array
 * @src: a character, the pointer to the source array
 *
 * Return: dest, the pointer to the destination (buffer) array.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i - 1] != '\0');

	return (dest);
}
