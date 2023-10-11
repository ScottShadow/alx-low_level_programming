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
	int i, count = 0;
	int (*p)(int, char *[]) = main;

	if (p == NULL)
		return (1);

	unsigned char *ptr_opcode = (unsigned char *)p;

	if (ptr_opcode == NULL)
		return (1);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	if (i < 0 || i == 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (count < i)
	{
		printf("%02x ", *ptr_opcode);
		count++;
		if (count < i)
			++ptr_opcode;
	}
	printf("\n");
	return (0);
}
