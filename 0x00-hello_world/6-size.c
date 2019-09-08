#include <stdio.h>

/**
 * main - prints sizes of types on local machine
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	int i;
	long int l;
	long long int m;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(n));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(m));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
