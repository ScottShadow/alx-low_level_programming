#include "3-calc.h"
/**
 * main - calculator
 * @argc: the number of arguments passed
 * @argv: array containing arguments passed
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(x, y));
	return (0);
}
