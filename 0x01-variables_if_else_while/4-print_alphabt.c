#include <stdio.h>

/**
 * main - prints alphabet with putchar
 * without q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 97;

	while (c < 123)
	{
		if (c == 101)
		{
			c++;
		}
		else if (c == 113)
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
