#include "holberton.h"

/**
 * get2pow - gets and adds the result of 2 to the power of X
 * @len: the integer to make the exponent
 *
 * Return: unsigned int, the result.
 */
unsigned int get2pow(unsigned int len)
{
	unsigned int i, result = 1;

	for (i = 1; i < len; i++)
		result *= 2;
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0's and 1's.
 *
 * Return: unsigned int (the number b in base 10)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, dec = 0;

	if (b == NULL || *b == '\0')
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);

	while (len > 0)
	{
		if (*b == '1')
			dec += get2pow(len);
		len--;
		b++;
	}

	return (dec);
}
