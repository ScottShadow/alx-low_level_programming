#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = size;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
