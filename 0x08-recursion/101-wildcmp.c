#include "main.h"
/**
 * count - counts the number of characters pointed to by s
 * @size: counter, should start from 0
 * @s: the string to count
 * Return: size of the string s
 */
int count(int size, char *s)
{
	if (*s == '\0')
		return (size);

	return (count(++size, ++s));
}
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
int wildcheck(char *s1, char *s2, int size1, int size2)
{
	if (*s2 == '\0')
		return (0);
	if (*s2 == '.')
		s1 = movetodot(s1);
	if (size2 == 3 && s1[size1 - 1] == *s2)
		return (1);
	if (s1[size1 - 1] == *s2)
		return (1);
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
	int size1 = 0, size2 = 0;
	char *in1 = s1, *in2 = s2;

	size1 = count(0, in1);
	size2 = count(0, in2);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wildcheck(s1, ++s2, size1, size2));

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
