#include "main.h"
/**
 * _prime - helper function to check if number is prime
 * @i: counter
 * @n: the number to check
 * Return: 1 if n is prime else 0 if it is not prime
 */
int _prime(int i, int n)
{
	if (n <= 1)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0 && i != n)
		return (0);

	return (_prime(++i, n));
}
/**
 * is_prime_number - checks if number is prime
 * @n: the number to check
 * Return:  1 if n is prime else 0 if it is not prime
 */
int is_prime_number(int n)
{
	return (_prime(2, n));
}
