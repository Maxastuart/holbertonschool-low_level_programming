#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: integer, command line argument count
 * @argv: character string array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
