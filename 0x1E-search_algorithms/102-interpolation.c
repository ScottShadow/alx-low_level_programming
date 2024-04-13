#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located
 * or -1 if value is not present in array
 * or -1 if array is NULL
 * or -1 if size is negative
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t pos = 0;

	if (array == NULL || size <= 0)
		return (-1);

	while (pos < size)
	{
		pos = low + (((double)(value - array[low]) / (array[high] - array[low])) * (high - low));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos;
		else if (array[pos] > value)
			high = pos;
	}
	return (-1);
}