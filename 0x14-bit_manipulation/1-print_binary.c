#include "main.h"
/**
 * converter - Converts a nber from an arbitrary base to @base
 *
 * @n:  An input nber in an arbitrary base.
 * @base: The target base for conversion.
 * @str: character pointer to conveted nber
 * @bf: the integer pointer to the size in memmory
 * @lc: checks if the base will be lowercase
 * Return: Nothing
 */
void converter(unsigned long int n,
			   unsigned int base, char *str, int *bf, int lc)
{
	char c = 'A';

	if (lc == 0)
		c = 'a';
	if (n >= base)
		converter(n / base, base, NULL, bf, lc);
	if (base < 10)
	{
		_putchar('0' + (n % base));
	}
	else
	{
		if ((n % base) > 9)
			_putchar(c + ((n % base) - 10));
		else
			_putchar('0' + (n % base));
	}
}
/**
 * print_binary - prints binary from uint decimal
 * @n: uinteger to change to binary
 */
void print_binary(unsigned long int n)
{
	int bf = 0;

	converter(n, 2, NULL, &bf, 0);
}
