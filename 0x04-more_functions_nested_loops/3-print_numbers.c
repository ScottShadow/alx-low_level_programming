#include "main.h"
/**
 * print_numbers - Print number 0 -9 using _putchar
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar((char)(i));
	}
	_putchar('\n');
}
