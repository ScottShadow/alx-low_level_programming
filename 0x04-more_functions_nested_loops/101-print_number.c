#include "main.h"
/**
 * print_number - prints an integer using _printchar
 * @n: the integer to print
 */

void print_number(int n)
{
	unsigned int tmp = 1000000000;
	unsigned int x, t2;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	x = n;

	while (tmp >= 10)
	{
		if ((unsigned)n >= tmp)
		{
			_putchar('0' + (n / tmp));
			t2 = tmp;

			while ((n % t2) / (t2 / 10) == 0 && n > 9)
			{
				if (t2 == 10)
					break;
				_putchar('0');
				t2 = t2 / 10;
			}

			n %= tmp;
		}

		tmp = tmp / 10;
	}
	_putchar('0' + (x % 10));
}
