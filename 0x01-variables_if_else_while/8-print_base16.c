#include <stdio.h>

/**
 * main - prints single digits of base 16 (0-F)
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 48;

	do {
		putchar(c);
		c++;
		if (c == 58)
			c = 97;
	} while (c < 103);
	putchar('\n');
	return (0);
}
