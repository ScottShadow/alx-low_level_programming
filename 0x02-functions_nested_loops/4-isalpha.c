#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
	int res;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		res = 1;
	else
		res = 0;
	return (res);
}
