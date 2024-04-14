#include "search_algos.h"
#define min(a, b) (((a) < (b)) ? (a) : (b))
/**
 * binary_search_helper - Recursive helper function for binary search.
 * @array: Pointer to the sorted array to search.
 * @beginning: Index of the beginning of the subarray.
 * @end: Index of the end of the subarray.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search_helper(int *array, size_t beginning, size_t end, int value)
{
	size_t current = (beginning + end) / 2;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = beginning; i <= end; i++)
		if (i != beginning)
			printf(", %d", array[i]);
		else
			printf("%d", array[i]);
	printf("\n");
	if (array[current] == value)
		return (current);
	if (beginning == end)
		return (-1);

	if (array[current] < value)
		return (binary_search_helper(array, (current + 1), end, value));
	else if (array[current] > value)
		return (binary_search_helper(array, beginning, (current - 1), value));

	return (-1);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the sorted array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_helper(array, 0, size - 1, value));
}
/**
 * exponential_search - Searches for a value in a sorted array using exponential search.
 * @array: Pointer to the sorted array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size <= 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}

	for (i = 1; i < size - 1; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		   (i / 2), min(i, (size - 1)));
	return (binary_search_helper(array, (i / 2), min(i, size - 1), value));
}
