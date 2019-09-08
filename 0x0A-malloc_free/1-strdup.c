#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str: pointer to the character string to copy
 *
 * Return: the pointer to the new string, or 0 on error
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *ar;

	if (str == 0)
		return (0);

	for (len = 0; str[len]; len++)
		;

	ar = malloc((len + 1) * sizeof(char));
	if (ar == 0)
		return (0);

	i = 0;
	while (str[i])
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
