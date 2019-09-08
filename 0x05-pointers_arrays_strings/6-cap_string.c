#include "holberton.h"

/**
 * *cap_string - converts first letter of each word in a string to uppercase
 * @s: an array of characters
 *
 * Return: char, the pointer to the array
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' ||
		    s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		    s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		    s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		    s[i - 1] == '}' || i == 0)
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
