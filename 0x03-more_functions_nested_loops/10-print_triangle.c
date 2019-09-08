#include "holberton.h"

/**
 * print_triangle - prints a triangle of #s with width and height of 'size'
 * @size: integer
 */
void print_triangle(int size)
{
	int j, k = 0;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = size; k > j + 1; k--)
			{
				_putchar(' ');
			}

			for (k = j; k >= 0; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
