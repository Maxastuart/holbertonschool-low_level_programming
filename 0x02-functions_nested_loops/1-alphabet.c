#include "holberton.h"
/**
 * print_alphabet - prints the alphabet with _putchar only
 *
 * Return: 0 (always)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
