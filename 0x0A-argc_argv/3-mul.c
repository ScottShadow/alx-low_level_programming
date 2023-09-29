#include "main.h"
#include <stdio.h>
/**
 * main - finds Product of two arguements passed
 * @argc: number of arguements passed
 * @argv: array of arguements passed
 * Return: 0 (success) else 1(Fail)
 */
int main(int argc, char *argv[])
{
	int i, j;
	int a = 0, b = 0, product = 0;
	int aisneg = 0, bisneg = 0;
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] == '-')
		{
			aisneg = 1;
			continue;
		}
		a = a * 10;
		a = a + (argv[1][i] - '0');
	}
	for (j = 0; argv[2][j] != '\0'; j++)
	{
		if (argv[2][j] == '-')
		{
			bisneg = 1;
			continue;
		}
		b = b * 10;
		b = b + (argv[2][j] - '0');
	}
	product = a * b;
	if ((aisneg == 1 || bisneg == 1) && (aisneg != bisneg))
		product = -product;

	printf("%d\n", product);

	return (0);
}
