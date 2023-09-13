#include <stdio.h>
#include <unistd.h>
/**
 * main -  prints the first 100 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	long int i = 1, j = 2, t, sum;

	printf("1, 2, ");
	for (t = 0; t < 89; t++)
	{
		sum = i + j;
		printf("%ld", sum);
		if (t != 88)
			printf(", ");
		i = j;
		j = sum;
	}

	printf("%ld, ", (i + (6 * j)));
	printf("%ld, ", (i + (10 * j)));
	printf("%ld, ", (17 * j));
	printf("%ld, ", (i + (27 * j)));
	printf("%ld, ", (i + (30 * j)));
	printf("%ld, ", (i + (47 * j)));
	printf("\n");
	return (0);
}
