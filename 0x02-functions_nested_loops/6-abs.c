#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: Integer to compute absolute value for
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
