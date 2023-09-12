#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	long int i = 1, j = 2, t, sum;

	printf("1, 2, ");
	for (t = 0; t < 48; t++)
	{
		sum = i + j;
		printf("%ld", sum);
		if (t != 49)
			printf(", ");
		else
			printf("\n");
		i = j;
		j = sum;
	}
	return (0);
}
