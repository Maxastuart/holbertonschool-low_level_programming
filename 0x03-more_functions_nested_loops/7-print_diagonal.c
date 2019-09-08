#include "holberton.h"

/**
 * print_diagonal - prints a line of backslashes the height and with of n
 * @n: integer
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
