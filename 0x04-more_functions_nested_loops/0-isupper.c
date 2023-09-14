#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to check for uppercase property
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
		res = 1;
	else
		res = 0;
	return (res);
}
