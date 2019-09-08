#include "holberton.h"

/**
 * set_bit - sets a bit to 1 in a certain number
 * @n: an unsigned long integer number
 * @index: the index of the bit to set, counting from 0 from the right
 *
 * Return: 1 if it worked, -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (mask << index);
	return (1);
}
