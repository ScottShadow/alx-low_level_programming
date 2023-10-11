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
	int number_bytes, count = 0;
	int (*p)(int, char *[]) = main;

	if (p == NULL)
		return (1);

	unsigned char *ptr_opcode = (char *)p;

	if (ptr_opcode == NULL)
		return (1);
	number_bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (number_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (count < number_bytes)
	{
		printf("%02x", *ptr_opcode);
		count++;
		if (count < number_bytes)
			printf(" ");
		if (count < number_bytes)
			++ptr_opcode;
	}
	if (number_bytes != 0)
		printf("\n");
	return (0);
}
