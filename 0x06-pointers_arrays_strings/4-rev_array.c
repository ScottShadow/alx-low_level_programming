#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: the array to invert
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int end = n - 1;
	int i, temp;

	for (i = 0; i < end; i++)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		end--;
	}
}
