#include <stdio.h>

/**
 * main - lists 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;
	unsigned long int a = 1, b = 1, c = 1;

	while (i <= 50)
	{
		printf("%lu", c);
		if (c < 12586269026)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
