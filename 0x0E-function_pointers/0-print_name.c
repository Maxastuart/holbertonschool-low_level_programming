#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print's a name by sending a string to a function pointer
 * @name: character string
 * @f: function pointer that takes a character string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
