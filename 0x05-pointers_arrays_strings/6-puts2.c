#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 */
void puts2(char *str)
{

	while (*str != '\0') /* loops until end of the string */
	{
		_putchar(*str);
		str = str + 2; /* increment str, move up a char in the string */
	}
	_putchar('\n');
}
