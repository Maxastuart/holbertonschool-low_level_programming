#include <stdio.h>

/**
 * main - prints single digits of base 10 (0-9)
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 48;

	do {
		putchar(c);
		c++;
	} while (c < 58);
	putchar('\n');
	return (0);
}
