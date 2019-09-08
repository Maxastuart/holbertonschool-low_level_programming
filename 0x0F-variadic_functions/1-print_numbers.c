#include "variadic_functions.h"

/**
 * print_numbers - variadic function to print numbers
 * @separator: string separator to place between the numbers
 * @n: number of arguments passed after constant ones
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	if (n != 0)
	{
		va_start(lst, n);

		printf("%d", va_arg(lst, int));
		for (i = 1; i < n; i++)
		{
			if (separator != NULL)
				printf("%s", separator);
			printf("%d", va_arg(lst, int));
		}
		va_end(lst);
	}
	printf("\n");
}
