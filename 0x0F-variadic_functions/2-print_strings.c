#include "variadic_functions.h"

/**
 * print_strings - variadic function to print strings
 * @separator: string separator to place between the strings
 * @n: number of arguments(as strings) passed after constant arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list lst;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(lst, n);
	s = va_arg(lst, char*);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		s = va_arg(lst, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(lst);
}
