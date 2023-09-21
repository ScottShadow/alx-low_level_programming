#include "main.h"
/**
 * print_number - prints a number using putchar
 * @n: the number to print
 */
void print_number(int n)
{
	int output;
	int input = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		input = n;
	}
	output = n % 10;
	n = n / 10;
	if (input > 9) /*recurse if the input is 10 or greater*/
		print_number(n);
	_putchar('0' + output);
}
