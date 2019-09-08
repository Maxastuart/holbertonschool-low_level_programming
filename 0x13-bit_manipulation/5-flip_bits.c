#include "holberton.h"

/**
 * flip_bits - finds number of bits needed to flip to swich 1 number to another
 * @n: an unsigned long integer number
 * @m: an unsigned long integer number
 *
 * Return: integer, the number of bits needed to flip to get the switch
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int i = 0;

	while (a)
	{
		if (a & 1)
			i++;
		a >>= 1;
	}

	return (i);
}
