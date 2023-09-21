#include "main.h"
/**
 * print_number - prints a number using putchar
 * @n: the number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 9) /*recurse if the input is 10 or greater*/
		print_number(n / 10);
	_putchar('0' + n % 10);
}
