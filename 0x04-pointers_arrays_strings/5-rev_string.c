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
 * rev_string - reverses a string
 * @s: a string, an array of characters
 */
void rev_string(char *s)
{
	int len = (_strlen(s)), high = 0, low = 0;
	char c;

	for (high = (len - 1); high >= (len / 2); high--)
	{
		low = (len - 1) - high;
		c = s[low];
		s[low] = s[high];
		s[high] = c;
	}
}
