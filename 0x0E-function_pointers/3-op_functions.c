#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one number from another
 * @a: the first number
 * @b: the second number
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies one number by another
 * @a: the first number
 * @b: the second number
 *
 * Return: the multiple
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number by another
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient (truncated)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - computes the modulo (remainder) of a divided by b
 * @a: the first number
 * @b: the second number
 *
 * Return: the modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
