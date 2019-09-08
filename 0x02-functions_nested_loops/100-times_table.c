#include "holberton.h"

/**
 * space - puts comma and spaces before the number if it's not 0
 * @k: integer from print_times_table
 * @j: integer from print_times_table
 */
void space(int k, int j)
{
	if (j != 0)
	{
		_putchar(',');
		if (k < 10)
			_putchar(' ');
		if (k < 100)
			_putchar(' ');
		_putchar(' ');
	}
}

/**
 * puttimes - puts the result of n*n
 * @k: integer from print_times_table
 */
void puttimes(int k)
{
	if (k >= 100)
		_putchar((k / 100) + '0');
	if (k >= 10)
		_putchar(((k / 10) % 10) + '0');
	_putchar((k % 10) + '0');
}

/**
 * print_times_table - prints times table of n * n starting with 0
 * @n: integer 0-15
 */
void print_times_table(int n)
{
	int i, j, k;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				space(k, j);
				puttimes(k);
			}
			_putchar('\n');
		}
	}
}
