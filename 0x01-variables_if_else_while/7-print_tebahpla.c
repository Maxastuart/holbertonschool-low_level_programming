#include <stdio.h>

/**
 * main - prints alphabet backwards
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 122;

	do {
		putchar(c);
		c--;
	} while (c > 96);
	putchar('\n');
	return (0);
}
