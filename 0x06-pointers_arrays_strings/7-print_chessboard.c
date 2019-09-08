#include "holberton.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: a pointer to a character array of 8 rows and 8 columns
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	/* loop to put rows */
	for (x = 0; x < 8; x++)
	{
		/* inner loop to put columns */
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
