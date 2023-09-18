#include "main.h"
/**
 * puts_half - prints half a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int size = 0;
	char *half_str = str;

	while (*str != '\0') /* loops until end of the string */
	{
		size++;
		str++; /* increment s, move up a char in the string */
	}

	if (size % 2 != 0)
		size--;

	half_str = half_str + (size / 2);
	while (*half_str != '\0')
	{
		_putchar(*half_str);
		half_str++;
	}
	_putchar('\n');
}
