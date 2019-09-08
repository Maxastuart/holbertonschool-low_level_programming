#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: a n unsigned long integer number
 */
void print_binary(unsigned long int n)
{
	unsigned int var;

	var = n & 1;
	n = n >> 1;
	if (n > 0)
		print_binary(n);
	_putchar(var + '0');
}
