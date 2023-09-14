#include "main.h"
/**
 * more_numbers - Prints numbers 0-14 x10
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');
			j = j % 10;
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
