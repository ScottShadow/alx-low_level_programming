#include "main.h"
/**
 * print_sign - prints the sign of a number + - 0.
 * @n: number to check
 * Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
