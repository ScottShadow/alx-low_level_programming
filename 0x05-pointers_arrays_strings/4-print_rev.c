#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 */
void print_rev(char *s)
{
	int size = 0;

	while (*s != '\0') /* loops until end of the string */
	{
		size++;
		s++; /* increment s, move up a char in the string */
	}

	while (size > 0)
	{
		s--;
		size--;
		_putchar(*(s));
	}
	_putchar('\n');
}
