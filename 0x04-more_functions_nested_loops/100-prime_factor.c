#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 * 612852475143
 * Return: Always 0
 */
int main(void)
{
	long int n, t, i = 0;
	long int arr[100];

	t = 2;
	n = 612852475143;
	while (t <= n)
	{
		if (n % t == 0)
		{
			arr[i++] = t;
			n = n / t;
			t = 2;
		}
		else
		{
			t++;
		}
	}
	printf("%ld", arr[i - 1]);
	printf("\n");

	return (0);
}
