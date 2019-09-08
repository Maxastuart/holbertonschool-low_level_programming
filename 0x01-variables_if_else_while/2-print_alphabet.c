#include <stdio.h>

/**
 * main - prints alphabet with putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
