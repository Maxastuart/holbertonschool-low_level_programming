#include "holberton.h"

/**
 * _strlen_recursion - calculates the length of a string with only recursion
 * @s: a string, an array of characters
 *
 * Return: an integer.
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
