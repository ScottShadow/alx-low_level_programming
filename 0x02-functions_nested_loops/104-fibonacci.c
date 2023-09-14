#include <stdio.h>
#include <unistd.h>
/**
 * main -  prints the first 100 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i = 1, j = 2, t, sum;

	printf("1, 2, ");
	for (t = 0; t < 89; t++)
	{
		sum = i + j;
		printf("%lu", sum);
		printf(", ");
		i = j;
		j = sum;
	}
	/*
	 *	printf("%lu, ", (i + j));
	 *	printf("%lu, ", (i + (2 * j)));
	 *	printf("%lu, ", ((4 * j)));
	 *	printf("%lu, ", (i + (6 * j)));
	 *	printf("%lu, ", (i + (10 * j)));
	 *	printf("%lu, ", (17 * j));
	 *	printf("%lu, ", (i + (27 * j)));
	 *	printf("%lu, ", (i + (30 * j)));
	 *	printf("%lu", (i + (47 * j)));
	 */
	printf("\n");
	return (0);
}
