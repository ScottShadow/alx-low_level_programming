#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - computes number of change to give
 * @argc: counts the number of arguments passed
 * @argv: array containing arguments passed
 * Return: 0(Success) else 1(Fail)
 */
int main(int argc, char *argv[])
{
	int j, a = 0, count = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (1);
	}
	for (j = 0; a != 0; j++)
	{
		count = count + (a / change[j]);
		a = a - (change[j] * (a / change[j]));
	}
	printf("%d\n", count);

	return (0);
}
