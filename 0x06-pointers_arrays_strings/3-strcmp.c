#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: integer to be compared to
 * @s2: integer to compare
 * Return: returns an integer less than, equal to, or greater than zero if s1
 *  is found, respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0')
	{
		if (*s1 > *s2)
		{
			res = res + (*s1 - *s2);
			break;
		}
		else if (*s1 < *s2)
		{
			res = res + (*s1 - *s2);
			break;
		}
		else if (*s1 == *s2)
		{
			res = res + 0;
			s1++;
			s2++;
		}
	}
	return (res);
}
