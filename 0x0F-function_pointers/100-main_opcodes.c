#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function.
 * @argc: the number of args passed
 * @argv: the array with args passed
 * Return: the 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*p)(int, char *[]) = main;
	unsigned long int i, count = 0;

	if (p == NULL)
		return (1);
	unsigned char *ptr_opcode = (unsigned char *)p;

	if (ptr_opcode == NULL)
	{
		return (-1);
	}
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1][0] == '-')
	{
		printf("Error\n");
		exit(2);
	}
	i = atoi(argv[1]);

	while (count < i)
	{
		printf("%02x ", *ptr_opcode++);
		count++;
	}

	printf("\n");
	return (0);
}
