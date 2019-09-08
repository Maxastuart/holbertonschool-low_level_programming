#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to add numbers
 * @n: number of arguments passed after constant ones
 *
 * Return: an integer, the resultant sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lst, int);
	va_end(lst);

	return (sum);
}
