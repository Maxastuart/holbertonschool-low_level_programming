#include "holberton.h"

/**
 * _puts - prints a string
 * @str: a string, an array of characters
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
