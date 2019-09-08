#include <stdio.h>

/**
 * main - prints single digits seperated by commas and spaces
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 48;

	for (; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
