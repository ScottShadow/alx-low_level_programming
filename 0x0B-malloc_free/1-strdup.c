#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate
 * Return: the length of @s
 */
int _strlen(char *s)
{
	int size = 0;

	if (s == 0)
		return (0);
	while (*s != '\0') /* loops until end of the string */
	{
		size++;
		s++; /* increment s, move up a char in the string */
	}

	return (size);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: the string to copy
 * Return: (On Success) pointer to the duplicated string. It returns
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	int i, size;

	size = _strlen(str);
	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		s[i] = str[i];

	return (s);
}
