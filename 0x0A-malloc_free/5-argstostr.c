#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments passed to it
 * @ac: integer number of array elemens (strings)
 * @av: array of character strings
 *
 * Return: the pointer to the new string, or 0 on error
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	str = malloc((ac + len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
