#include "holberton.h"

/**
 * get_bit - returns the binary representation of certain index of a number
 * @n: a n unsigned long integer number
 * @index: the index of the bit to return, counting from 0 from the right
 *
 * Return: 1 or 0 (the bit value) or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (index == 0)
		return (n & 1);
	return ((n >> index) & 1);
}
