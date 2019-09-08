#include <stdio.h>

/**
 * main - prints all triplets of digits 012-789 which are different,
 * seperated by commas and spaces.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = '0', b = '0', c = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (!(((c == b) || (c == a)) || (a == b)))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (((a != '7') || (b != '8')) || (c != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			c = (b + 1);
			b++;
		}
		b = (a + 1);
		a++;
	}
	putchar('\n');
	return (0);
}
