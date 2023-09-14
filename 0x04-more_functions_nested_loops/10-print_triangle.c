#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, x, y;

	for (i = 1; i <= size; i++)
	{
		x = size - i;
		while (x--)
			_putchar(' ');

		y = i;
		while (y--)
			_putchar('#');

		_putchar('\n');
	}
	if (size == 0 || size < 0)
		_putchar('\n');
}
