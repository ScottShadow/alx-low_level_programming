#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar((char)(j));
		}
		_putchar('\n');
	}
}
