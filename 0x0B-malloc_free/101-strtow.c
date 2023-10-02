#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits a string into words.
 * @str: the string to split
 * Return: s split string
 */
char **strtow(char *str)
{
	int n = 0, size = 0, i = 0, j = 0, k = 0, p = 0, l = 0, wc = 0;
	char **s;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			wc++;
	}

	s = (char **)malloc(sizeof(char *) * wc);
	if (s == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] != ' ')
			size++;
		if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
		{
			printf("size : %d\n", size);
			s[j] = malloc(sizeof(char) * size + 1);
			if (s[j] == NULL)
				return (NULL);
			j++;
			size = 0;
		}
	}
	for (l = 0; str[l] != '\0'; l++)
	{
		if (str[l] != ' ')
			s[n][p++] = str[l];
		if (str[l] != ' ' && (str[l + 1] == ' ' || str[l + 1] == '\0'))
		{
			s[n][p] = '\0';
			n++;
			p = 0;
		}
	}
	s[wc] = NULL;
	return (s);
}
