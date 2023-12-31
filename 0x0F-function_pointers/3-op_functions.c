#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum a + b
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
 * op_sub - subtracts two integers a - b
 * @a: first integer
 * @b: second integer
 * Return: difference a - b
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
 * op_mul - multiplies two integers a * b
 * @a: first integer
 * @b: second integer
 * Return: product of a * b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divides two integers a / b
 * @a : first integer
 * @b : second integer
 * Return: result of a / b or 0 (Fail)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}
/**
 * op_mod - calculates modulus between two integers a % b
 * @a : first integer
 * @b : second integer
 * Return: remainder of a / b or 0 (Fail)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
