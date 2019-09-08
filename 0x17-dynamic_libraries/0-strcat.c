#include "holberton.h"

/**
 * *_strcat - concatenates a string to another
 * @dest: a character, the pointer to the destination array
 * @src: a character, the pointer to the source array
 *
 * Return: dest, the pointer to the destination array.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (src[j - 1] != '\0');

	return (dest);
}
