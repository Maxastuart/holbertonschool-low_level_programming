#include <stdio.h>

/**
 * main - prints alphabet with putchar
 * lowercase and UPPERCASE
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 97;

	do {
		putchar(c);
		c++;
		if (c == 123)
			c = 65;
	} while (c != 91);
	putchar('\n');
	return (0);
}
