#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: a pointer to a string, an array of characters.
 * @c: the character to find.
 *
 * Return: first occurance of char c, or 0 if there is no c in string s.
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return (s);
	return (0);
}
