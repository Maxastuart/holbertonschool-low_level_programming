#include <stdio.h>

/**
 * main - finds and prints all prime numbers of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long i = 612852475143, a = 2;

	while (i / a != 1)
	{
		while (i % a == 0)
		{
			i = i / a;
		}
		a++;
	}
	printf("%ld\n", i);
	return (0);
}
