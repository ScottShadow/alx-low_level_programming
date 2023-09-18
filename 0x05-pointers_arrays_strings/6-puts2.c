#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to print
 */
void puts2(char *str)
{
	int size = 0;
	char *strp = str;

	while (*str != '\0') /* loops until end of the string */
	{
		size++;
		str++; /* increment str, move up a char in the string */
	}

	for (int i = 0; i < size; i = i + 2)
	{
		_putchar(*strp);
		strp = strp + 2;
	}
	_putchar('\n');
}
