#include "holberton.h"

/**
 * _puts_recursion - prints a string using only recursion
 * @s: a string, an array of characters
 */
void _puts_recursion(char *s)
{
	if (*s)
		_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	if (!(*s))
		_putchar('\n');
}
