#include <stdio.h>

/**
 * main - prints all pairs of digits 01-89 which are different,
 * seperated by commas and spaces.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int TENS = '0', ONES = '0', i = 0;

	while (TENS <= '9')
	{
		while (ONES <= '9')
		{
			if ((ONES != TENS) || (ONES == (ONES + TENS)))
			{
				putchar(TENS);
				putchar(ONES);
				if ((TENS != '8') || (ONES != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			ONES++;
		}
		ONES = (TENS + 1);
		TENS++;
		i++;
	}
	putchar('\n');
	return (0);
}
