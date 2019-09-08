#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: unsigned int of the size of the array to be created
 * @c: character to be filled in the array
 *
 * Return: the character array, or 0 on error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = malloc(size * sizeof(char));

	if (size == 0)
		return (0);
	if (ar == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
