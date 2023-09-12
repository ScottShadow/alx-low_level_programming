#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to check for lowercase property
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	int res;

	if (c >= 'a' && c <= 'z')
		res = 1;
	else
		res = 0;
	return (res);
}
