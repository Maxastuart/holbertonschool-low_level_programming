#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer, number of bytes of memory to allocate
 *
 * Return: the pointer to the string; normal process termination (98) on error
 */
void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);
	if (ar == 0)
		exit(98);
	return (ar);
}
