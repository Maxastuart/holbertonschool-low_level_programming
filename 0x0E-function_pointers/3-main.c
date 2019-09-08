#include "3-calc.h"

/**
 * main - a simple calculator that prints the result
 * @argc: the number of arguments
 * @argv: the array of arguments as strings
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", (get_op_func(argv[2])(num1, num2)));

	return (0);
}
