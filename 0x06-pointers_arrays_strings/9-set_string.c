#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer
 * @to: a pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
