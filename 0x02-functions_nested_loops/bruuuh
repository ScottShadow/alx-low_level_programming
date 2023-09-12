#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed
 * by a new line.
 * @n: endpoint.
 */
void print_to_98(int n)
{
	int i = n;
	int tens, hundreds, step, tmp;

	if (n >= 99)
		step = -1;
	if (n <= 98)
		step = 1;
	else
		step = 0;
	while (1 == 1)
	{
		tmp = i;
		hundreds = tmp / 100;
		if (i > 99)
			_putchar('0' + hundreds);
		tens = tmp / 10;
		if (i > 9)
			_putchar('0' + tens);
		_putchar('0' + (tmp % 10));
		if (i == 98 || step == 0)
			break;
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		i = i + step;
	}
	_putchar('\n');
}

