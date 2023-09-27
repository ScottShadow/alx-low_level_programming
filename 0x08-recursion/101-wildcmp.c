#include "main.h"
/**
 * movetodot - moves pointer to '.'
 * @s: the pointer to the string
 * Return: pointer pointing to '.'
 */
char *movetodot(char *s)
{
	if (*s == '\0')
		return (s);
	if (*s == '.')
		return (s);
	return (movetodot(++s));
}
/**
 * wildcheck - compares string with wildcards
 * @s1: string to compare
 * @s2: string to compare to s1
 * Return: 1(Success) strings match, else 0(Fail)
 */
int wildcheck(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (0);
	if (*s2 == '.')
		s1 = movetodot(s1);
	return (wildcmp(s1, s2));
}
/**
 * wildcmp - main sting compare function
 * compares s1 to s2
 * @s1: string to compare
 * @s2: string to compare to
 * Return: 1(Success) strings match, else 0(Fail)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wildcheck(s1, ++s2));

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
