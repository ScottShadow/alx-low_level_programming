#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: the number of arguements
 * @argv: the array containing arguements passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[i] != NULL; i++)
		printf("%s\n", argv[i]);
	return (0);
}
