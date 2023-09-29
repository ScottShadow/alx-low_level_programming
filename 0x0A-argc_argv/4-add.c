#include "main.h"
#include <stdio.h>
/**
 * main - computes infinite sum
 * @argc: counts the number of arguements passed
 * @argv: array containing arguements passed
 * Return: 0(Success) else 1(Fail)
 */
int main(int argc, char *argv[])
{
	int i = 0, j;
	int a = 0, sum = 0;

	for (j = 1; j < argc; j++)
	{
		a = 0;
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}

			a *= 10;
			a = a + (argv[j][i] - '0');
		}
		sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
