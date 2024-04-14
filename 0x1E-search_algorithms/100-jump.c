#include "search_algos.h"
#include <math.h>

/**
 * linearjump_search - Searches for a value in an array using linear search.
 * @array: Pointer to the array to search.
 * @start: Index to start the search from.
 * @end: Index to end the search at.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 */
int linearjump_search(int *array, int start, int end, int value)
{
	for (; start <= end; start++)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}
/**
 * jump_search - searches for a value in an array
 * using the jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump = sqrt(size);

	if (array == NULL)
		return (-1);

	for (i = 0; i < size && (i + jump) < size; i += jump)
	{
		if (array[i] == value)
			return (i);

		if (array[i] < value && array[i + jump] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			continue;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			printf("Value found between indexes [%ld] and [%ld]\n", i, (i + jump));
			return (linearjump_search(array, i, (i + jump), value));
		}
	}
	return (linearjump_search(array, i, size, value));
}
