#include "main.h"
/**
 * _isdigit - checks to see if its a digit
 * @c: The integer to check for digit property
 *
 * Return: On success 1.
 */
int _isdigit(int c)
{
	int res;

	if (c >= '0' && c <= '9')
		res = 1;
	else
		res = 0;
	return (res);
}
