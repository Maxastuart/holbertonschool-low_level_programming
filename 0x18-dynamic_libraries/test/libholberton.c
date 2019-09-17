#include "holberton.h"

/**
 * _isupper - checks for an uppercase character
 * @c: ascii character
 *
 * Return: 1 if c is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}


/**
 * _memset - fills the first n bytes of the memory pointed to with the char b.
 * @s: a pointer, an array of characters.
 * @b: the character to replace others in the array.
 * @n: the number of array elements to replace.
 *
 * Return: char *s, the original array address.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *su = s;

	while (n-- != 0)
	{
		*su = b;
		su++;
	}
	return (s);
}


/**
 * *_strcat - concatenates a string to another
 * @dest: a character, the pointer to the destination array
 * @src: a character, the pointer to the source array
 *
 * Return: dest, the pointer to the destination array.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (src[j - 1] != '\0');

	return (dest);
}


/**
 * _atoi - converts character string to integer
 * @s: a character string
 *
 * Return: an integer, the number converted.
 */
int _atoi(char *s)
{
	int i, res;

	for (i = 0; s[i]; i++)
		res = res * 10 + s[i] - '0';
	return (res);
}
#include "holberton.h"

/**
 * _isdigit - checks for a digit character
 * @c: ascii character
 *
 * Return: 1 if c is a digit, 0 if not.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}


/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the pointer to the destination array (type char)
 * @src: the pointer to the source array (type char)
 * @n: the number of array elements to replace.
 *
 * Return: char *dest, the original array address.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dst = dest;

	while (n-- != 0)
	{
		*dst++ = *src++;
	}
	return (dest);
}


/**
 * *_strncat - concatenates 2 strings, maximum n bytes from the source
 * @dest: a character, the pointer to the destination array
 * @src: a character, the pointer to the source array
 * @n: an integer, the maximum number of bytes to use from src
 *
 * Return: dest, the pointer to the destination array.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while ((j < n) && (src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}


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
 * *_strncpy - copies a string to a buffer
 * @dest: a character, the pointer to the buffer array
 * @src: a character, the pointer to the source array
 * @n: an integer, the maximum number of bytes to use from src
 *
 * Desription: like *_strcpy, but this only copies n number of bytes of the
 * source, and makes the extraneous array elements past the source's null
 * terminator null.
 *
 * Return: dest, the pointer to the destination (buffer) array.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}


/**
 * _islower - checks for lowercase character
 * @c: ascii character
 *
 * Return: 1 if c is lowercase, 0 if not.
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}


/**
 * _puts - prints a string
 * @str: a string, an array of characters
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}


/**
 * _strcmp - compares one string to another, 1 array element at a time
 * @s1: character type, the pointer to the first string array
 * @s2: character type, the pointer to the second string array
 *
 * Return: an integer, positive if s1 > s2, negative is s1 < s2, 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;

	if (s1[i] - s2[i] > 0)
		return (s1[i] - s2[i]);
	else if (s1[i] - s2[i] < 0)
		return (s1[i] - s2[i]);
	else
		return (0);
}


/**
 * _strspn - counts the number of bytes of a string matching another string.
 * @s: a pointer to a string, an array of characters.
 * @accept: the  string of character to count in s.
 *
 * Return: the number of bytes of s in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *s1 = s, *a1;

	while (*s1)
	{
		a1 = accept;
		while (*a1 && *s1 != *a1)
			a1++;
		if (*s1 == *a1)
			s1++;
		else
			return (s1 - s);
	}

	return (0);
}


/**
 * _isalpha - checks for alphabetic character
 * @c: ascii character
 *
 * Return: 1 if c is alphabetic, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}


/**
 * _strpbrk - finds the first match in a string for any of a set of bytes.
 * @s: a pointer to a string, an array of characters.
 * @accept: a pointer to a string, the characters to find a match for.
 *
 * Return: pointer to byte in s that matches one of accept, otherwise 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a1;

	while (*s)
	{
		a1 = accept;
		while (*a1 && *s != *a1)
			a1++;
		if (*s != *a1)
			s++;
		else
			return (s);
	}

	return (0);
}


/**
 * _strstr - finds the first full match of a string in a string.
 * @haystack: a pointer to a string, an array of characters.
 * @needle: a pointer to a string, the characters to find a match for.
 *
 * Return: byte in haystack that matches the first one of needle, otherwise 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n1, *h1;

	while (*haystack)
	{
		n1 = needle;
		/* looks for a match to first char of needle */
		for (h1 = haystack; *h1 && *h1 == *n1; h1++)
		{
			/* check that all subsequent chars of needle match */
			if (*n1 && *h1 == *n1)
				n1++;
		}
		/* if all match, returns the first byte they matched */
		if (!(*n1))
			return (haystack);
		haystack++;
	}

	return (0);
}


/**
 * _abs - computes absolute value of an integer
 * @i: an integer
 * Return: int
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}


/**
 * *_strcpy - copies a string to a buffer
 * @dest: a character, the pointer to the buffer array
 * @src: a character, the pointer to the source array
 *
 * Return: dest, the pointer to the destination (buffer) array.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i - 1] != '\0');

	return (dest);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
