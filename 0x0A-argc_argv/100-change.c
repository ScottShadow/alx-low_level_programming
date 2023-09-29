#include "main.h"
#include <stdio.h>
/**
 * main - computes number of change to give
 * @argc: counts the number of arguments passed
 * @argv: array containing arguments passed
 * Return: 0(Success) else 1(Fail)
 */
int main(int argc, char *argv[])
{
	int i, j, a = 0, count = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		return (-1);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}

		a *= 10;
		a = a + (argv[1][i] - '0');
	}
	for (j = 0; a != 0; j++)
	{
		count = count + (a / change[j]);
		a = a - (change[j] * (a / change[j]));
	}
	printf("%d\n", count);

	return (0);
}
