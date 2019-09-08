#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse using only recursion
 * @s: a string, an array of characters
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		if (*s)
			_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
