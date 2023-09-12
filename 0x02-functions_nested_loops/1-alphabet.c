#include "main.h"
/**
 * print_alphabet - Print the alphabet using printchar
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar((char)(i));
	}
	_putchar('\n');
}
