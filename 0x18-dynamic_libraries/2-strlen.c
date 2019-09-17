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
