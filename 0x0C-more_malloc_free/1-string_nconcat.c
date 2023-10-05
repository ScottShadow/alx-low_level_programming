#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	unsigned int newsize;
	char *temp = NULL;

	if (s1 == NULL)
		s1 = "";
	if (size2 <= n)
		n = size2;

	newsize = ((n * sizeof(*s1)) + size1 + 1);

	temp = malloc(newsize);
	if (temp == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		temp[j] = s1[j];

	for (i = size1; i < newsize; i++)
		*(temp + i) = *(s2++);
	temp[newsize] = '\0';
	return (temp);
}
