#include "main.h"
/**
 * set_bit - sets a bit at a spececified index to 1
 * @n: the integer to set for
 * @index: the desired index
 * Return: 1 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index > 63)
		return (-1);
	*n = (*n) | i;
	return (1);
}
