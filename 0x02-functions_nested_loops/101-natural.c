#include <stdio.h>

/**
 * main - computers sum of natural number which are multiples of 3 or 5
 * below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0, a = 0;

	while (a < 1024)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
