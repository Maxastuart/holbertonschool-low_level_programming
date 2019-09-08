#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints sequentially from input number to 98
 * @n: integer
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
