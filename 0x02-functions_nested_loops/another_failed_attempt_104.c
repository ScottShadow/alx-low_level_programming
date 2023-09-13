#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line.
 * Return: Always 0
 */
int calculate_i(int n, int i, int j)
{
	return (i + j);
}

int calculate_j(int n, int j)
{
	return (n);
}

int main(void)
{
	int i = 1;
	int j = 2;
	int n;

	printf("Pattern: %d, %d, ", i, j);

	for (n = 0; n < 5; n++)
	{
		i = calculate_i(n, i, j);
		j = calculate_j(n, j);
		if (n == 49)
			printf("%d, %d\n", i, j);
		else
			printf("%d, %d, ", i, j);
	}
	return (0);
}




