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

	while (*s != '\0') /* loops until end of the string */
	{
		size++;
		s++; /* increment s, move up a char in the string */
	}

	return (size);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to expand
 * @s2: string to copy
 * @n: the size to expand
 * Return: pointer to new expanded string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int size1;
	unsigned int size2;
	unsigned int newsize;
	char *temp;

	if (s1 != NULL)
	{
		size1 = _strlen(s1);
	}
	else
	{
		size1 = 0;
		s1 = "";
	}
	size2 = _strlen(s2);
	if (size2 <= n)
		n = size2;

	newsize = ((n * sizeof(*s1)) + size1 + 1);

	temp = malloc(newsize);
	if (temp == NULL)
		return (NULL);
	if (size1 > 0)
	{
		for (j = 0; s1[j] != '\0'; j++)
			temp[j] = s1[j];
	}

	for (i = size1; i < newsize - 1; i++)
		*(temp + i) = *(s2++);
	temp[newsize] = '\0';
	return (temp);
}
