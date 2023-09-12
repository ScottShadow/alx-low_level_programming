#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	long int new_s = 0, sum = 3;
	long int i = 1, j = 2;

	while (sum < 4000000)
	{
		if (sum > 4000000)
			break;
		sum = i + j;
		i = j;
		j = sum;
		if ((sum % 2) != 0)
			continue;
		if (sum < 4000000)
			new_s = sum + new_s;
	}
	printf("%ld\n", new_s);
	return (0);
}
