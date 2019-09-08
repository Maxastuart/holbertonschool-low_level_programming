#include <stdio.h>

/**
 * main - prints all pairs of digits 00-99 seperated by commas and spaces
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int tens = '0';
	int ones = '0';

	while (tens <= '9')
	{
		while (ones <= '9')
		{
			putchar(tens);
			putchar(ones);
			if ((ones != '9') || (tens != '9'))
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		ones = '0';
		tens++;
	}
	putchar('\n');
	return (0);
}
