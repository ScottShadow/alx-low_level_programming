#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to print
 */
void print_number(int n)
{
	int t;

	t = n;
	if (n < 0)
	{
		n = n * -1;
		t = n;
		_putchar('-');
	}

	t = t / 10;
	if (t != 0)
		print_number(t);
	_putchar('0' + n % 10);
}
