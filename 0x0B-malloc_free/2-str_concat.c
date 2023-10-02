#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate
 * Return: the length of @s
 */
int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0') /* loops until end of the string */
	{
		size++;
		s++; /* increment s, move up a char in the string */
	}

	return (size);
}
/**
 * str_concat - concatenates two strings.
 * @s1: String to print
 * @s2: String to print
 * Return: (Success) The concatenated string of s1 and s2
 * (On Fail) Null
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, size3;
	int i;
	char *s;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size3 = size1 + size2 + 1;
	s = malloc(sizeof(char) * size3);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		s[size1 + i] = s2[i];
	}
	if (s == NULL)
		return (NULL);
	return (s);
}
