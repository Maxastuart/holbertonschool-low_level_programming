#include "holberton.h"

/**
 * print_last_digit - prints last digit of an integer
 * @i: an integer
 *
 * Return: int
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}
