#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiple of 2 numbers passed to it
 * @argc: integer, argument count
 * @argv: a character string array of arguments
 *
 * Return: 0 on success, nonzero on error.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
