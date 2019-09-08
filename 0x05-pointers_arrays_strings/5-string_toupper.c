#include "holberton.h"

/**
 * *string_toupper - converts all lowercase letters in a string to uppercase
 * @s: an array of characters
 *
 * Return: char, the pointer to the array
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
