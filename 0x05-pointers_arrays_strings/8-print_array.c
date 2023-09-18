#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: the array to print
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	while (i < (n - 1))
	{
		printf("%d, ", *(a + i));
		i++;
	}

	printf("%d\n", *(a + (n - 1)));
}
