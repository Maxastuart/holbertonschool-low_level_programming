#include <stdio.h>

/**
 * main - prints 1 to 100 and replaces Fizz or Buzz for multiples of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 5 != 0) && (i % 3 != 0))
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
