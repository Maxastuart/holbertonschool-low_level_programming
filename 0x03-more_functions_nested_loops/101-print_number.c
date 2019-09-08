#include "holberton.h"

/**
 * print_next_number - grabs, orders and prints the digits of a number
 * @n: integer
 */
void print_next_number(int n)
{
	int digit_number = 1, c = 1;

	while (c <= n / 10)
	{
		digit_number++;
		c = c * 10;
	}

	while (digit_number > 0)
	{
		_putchar(n / c + '0');
		n = n % c;
		c = c / 10;
		digit_number--;
	}
}


/**
 * print_number - prints a number with only _putchar
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_next_number(n);
}
