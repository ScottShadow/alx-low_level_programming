#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the array to look into
 * @size: the size of the array passed
 * @cmp: the function pointer to use
 * Return: it returns the index of the first
 * element for which the cmp function does not return 0
 * if no elements are passed return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int found;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		found = cmp(array[i]);
		if (found != 0)
			return (i);
	}
	return (-1);
}
