#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x, y, product, tens;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			product = x * y;
			if (product > 9)
			{
				tens = product / 10;
				_putchar('0' + tens);
			}
			else if (y != 0)
			{
				_putchar(' ');
			}

			_putchar('0' + (product % 10));

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
