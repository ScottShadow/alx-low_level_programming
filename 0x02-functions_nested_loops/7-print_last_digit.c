#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to cut.
 * Return: On success 1.
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (res < 0)
		res = -res;
	_putchar('0' + res);
	return (res);
}
