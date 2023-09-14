#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i = 1, t = n;

	while (i <= t)
	{
		n = 1;
		while (n < i)
		{
			_putchar(' ');
			n++;
		}

		_putchar('\\');

		if (i != t)
			_putchar('\n');

		i++;
	}
	_putchar('\n');
}

