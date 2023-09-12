#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to cut.
 * Return: On success 1.
 */
int print_last_digit(int n)
{
	int res;

	if (n < 0)
		n = -n;
	res = n % 10;
	_putchar('0' + res);
	return (res);
}
