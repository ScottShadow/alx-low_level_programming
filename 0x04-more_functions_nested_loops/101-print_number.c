#include "main.h"
/**
 * print_number - prints an integer using _printchar
 * @n: the integer to print
 */

void print_number(int n)
{
	int tmp = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (tmp >= 10)
	{
		if (n >= tmp)
		{
			_putchar('0' + (n / tmp));

			if ((n % tmp) / (tmp / 10) == 0 && n > 9)
				_putchar('0');

			n %= tmp;
		}

		tmp = tmp / 10;
	}
	_putchar('0' + (n % 10));
}

