#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: the minimum amount
 * @max: max
 * Return:the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, start;
	int size = max + 1 - min;
	int *p;

	if (max < min)
		return (NULL);
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0, start = min; i < size; i++)
	{
		p[i] = start++;
	}
	return (p);
}
