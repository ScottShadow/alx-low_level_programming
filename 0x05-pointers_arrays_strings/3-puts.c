#include "main.h"
/**
 * _puts - prints a string
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str != '\0') /* loops until end of the string */
	{
		_putchar(*str);
		str++; /* increment str, move up a char in the string */
	}
	_putchar('\n');
}
