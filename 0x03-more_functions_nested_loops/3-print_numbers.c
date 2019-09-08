#include "holberton.h"
/**
 * print_numbers - prints the numbers with _putchar only
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
