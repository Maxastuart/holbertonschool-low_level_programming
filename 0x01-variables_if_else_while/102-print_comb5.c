#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + j; j <= 99; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		j = 0;
	}
	putchar('\n');
	return (0);
}
