#include "variadic_functions.h"

/**
 * print_c - a function to print characters.
 * @lst: the next va_list variadic argument (type char) to print.
 */
void print_c(va_list lst)
{
	printf("%c", va_arg(lst, int));
}

/**
 * print_i - a function to print integers.
 * @lst: the next va_list variadic argument (type int) to print.
 */
void print_i(va_list lst)
{
	printf("%d", va_arg(lst, int));
}

/**
 * print_f - a function to print floating integers.
 * @lst: the next va_list variadic argument (type float) to print.
 */
void print_f(va_list lst)
{
	printf("%f", va_arg(lst, double));
}

/**
 * print_s - a function to print strings.
 * @lst: the next va_list variadic argument (type string) to print.
 */
void print_s(va_list lst)
{
	char *s = va_arg(lst, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - variadic function to print chars, ints, floats, or strings.
 * @format: a string of the rest of the argument types in relative order.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list lst;
	get_fun funs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	char *sep = "";

	va_start(lst, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (funs[j].typ != NULL)
		{
			if (format[i] == *(funs[j].typ))
			{
				printf("%s", sep);
				funs[j].f(lst);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
