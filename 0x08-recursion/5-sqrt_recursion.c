#include "main.h"
/**
 * _sqrt - finds a square root of a number recursively
 * @i: counter
 * @n: the number to find the root of
 * Return: square root of n
 */
int _sqrt(int i, int n)
{
	if (i == n)
		return (-1);

	if (((n / i) * (n / i)) == n)
		return (i);
	return (_sqrt(++i, n));
}
/**
 * _sqrt_recursion - finds sqruare root using _sqrt
 * @n: the number to find root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 1 || n == 0)
		return (n);
	if (n < 0)
		return (-1);

	return (_sqrt(i, n));
}
