#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts string to uint
 * @b: string to convert
 * Return: converted uint or 0 (fail)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size, index, newint = 0;
	unsigned int multiplier = 1;

	size = strlen(b) - 1;
	index = 0;

	while (index <= size)
	{
		if (index == 1)
			multiplier = 2;
		if (b[(size - index)] >= '0' && b[(size - index)] <= '9')
			newint += (b[(size - index)] - '0') * multiplier;
		else
		{
			newint = 0;
			return (0);
		}
		multiplier *= 2;
		index++;
	}

	return (newint);
}
