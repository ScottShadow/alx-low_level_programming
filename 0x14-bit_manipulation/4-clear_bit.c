#include "main.h"
/**
 * clear_bit - clears bit at index
 * @n: address of integer to modify
 * @index: the index to which the integer will be modified
 * Return: 1(Success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1 << index;
	unsigned long int t = (*n) >> index;

	if (index > 63)
		return (-1);
	if ((t & 1) == 1)
		*n = (*n) & (~i);

	return (1);
}