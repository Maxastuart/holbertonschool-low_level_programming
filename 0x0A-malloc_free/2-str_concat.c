#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concatenates 2 strings
 * @s1: pointer to the first character string
 * @s2: pointer to the second character string
 *
 * Return: the pointer to the new string, or 0 on error
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len1 = 0, len2 = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	ar = malloc((len1 + len2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];
	for ( ; s2[j]; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
