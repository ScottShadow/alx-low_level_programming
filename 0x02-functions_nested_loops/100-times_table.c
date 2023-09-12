#include "main.h"
/**
 * print_times_table - prints the @n times table, starting with 0.
 * @n: endpoint
 */
void print_times_table(int n)
{
	int i, j, p, o, t, h;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			o = p % 10;
			t = (p % 100) / 10;
			h = p / 100;

			if (j == 0)
			{
				_putchar('0');
			} else
			{
			if (p > 99)
				_putchar('0' + h);
			else
				_putchar(' ');

			if (p > 9)
				_putchar('0' + t);
			else
				_putchar(' ');

			_putchar('0' + o);
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
