#include "main.h"
/**
 * print_most_numbers - Print number 0-9 except for 2 & 4 using _putchar
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar((char)(i));
	}
	_putchar('\n');
}
