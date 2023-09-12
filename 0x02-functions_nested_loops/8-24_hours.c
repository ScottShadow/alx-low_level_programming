#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int k, l, j, i;

	for (k = '0'; k <= '2'; k++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			for (j = '0'; j <= '5'; j++)
			{
				for (i = '0'; i <= '9'; i++)
				{
					_putchar(k);
					_putchar(l);
					_putchar(':');
					_putchar(j);
					_putchar(i);
					_putchar('\n');
					if (k == '2' && l == '3' && j == '5' && i == '9')
						return;
				}
			}
		}
	}
}
