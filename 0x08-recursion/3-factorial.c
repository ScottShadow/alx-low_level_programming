#include "main.h"
/**
 * factorial - prints out a factorial of a number
 * @n: the number to calculate factorial of.
 * Return: the factorial, -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
