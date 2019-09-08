#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string, an array of characters
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = (_strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

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
