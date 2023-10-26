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
	}
	bit = n & 1;
	return (bit);
}
