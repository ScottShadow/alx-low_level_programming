#include "main.h"
/**
 * get_bit - get bit of @n at index @index
 * @n: uinteger passed
 * @index: index at which to look at
 * Return: index found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	while (index >= 1)
	{
		n = n >> 1;
		index--;
		if (n == 0 && index >= 1)
			return (-1);
	}
	bit = n & 1;
	return (bit);
}
