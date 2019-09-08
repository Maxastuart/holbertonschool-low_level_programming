#include "holberton.h"

/**
 * _strlen - calculates and returns the length of a string
 * @s: a string, an array of characters
 *
 * Return: an integer.
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}

/**
 * puts_half - calculates and prints the second half of a string
 * @str: a string, an array of characters
 */
void puts_half(char *str)
{
	int len = (_strlen(str)), start = 0;

	if (len % 2 == 0)
		start = len / 2;
	if (len % 2 != 0)
		start = (len + 1) / 2;

	for ( ; str[start] != '\0'; start++)
		_putchar(str[start]);
	_putchar('\n');
}
