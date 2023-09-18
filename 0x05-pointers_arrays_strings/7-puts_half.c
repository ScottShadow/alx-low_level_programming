#include "main.h"
/**
 * puts_half - prints half a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int size = 0, i = 0, count;
	char *strp = str;

	while (*str != '\0') /* loops until end of the string */
	{
		size++;
		str++; /* increment str, move up a char in the string */
	}
	count = size;
	if (size % 2 != 0)
		count++;

	for (i = 0; i < size; i++)
	{
		if (i >= (count / 2))
			_putchar(*strp);
		strp++;
	}
	_putchar('\n');
}
