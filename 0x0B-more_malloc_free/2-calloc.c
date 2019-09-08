#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates initialized memory for an array with nmemb elements.
 * @nmemb: unsigned integer, the number of array elements
 * @size: unsigned integer, size in bytes of each array element
 *
 * Return: pointer to the array; 0 on error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s, *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == 0)
		return (NULL);
	p = s;
	for (i = 0; i < nmemb * size; i++)
		*p++ = 0;
	return (s);
}
