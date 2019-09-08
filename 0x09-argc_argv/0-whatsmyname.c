#include <stdio.h>

/**
 * main - prints the name of the program as typed in the command prompt
 * @argc: integer, command line argument count
 * @argv: character string array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
