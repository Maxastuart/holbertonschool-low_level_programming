#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates 2 strings with a certain number from s2
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: unsigned integer, number of bytes of s2 to copy
 *
 * Return: pointer to the new string; 0 on error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	if (len2 < n)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == 0)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
