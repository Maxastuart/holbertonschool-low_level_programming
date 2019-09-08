#include <stdio.h>

/**
 * main - prints the each argument passed to it, including the program name
 * @argc: integer, argument count
 * @argv: character string array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
