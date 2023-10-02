#include "main.h"
#include <stdlib.h>
/**
 * argstostr - prints all arguements
 * @ac: arguement count
 * @av: point to individual arguments passed
 * Return:  pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int size, sum = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size = 0;
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		sum = sum + size + 1;
	}
	s = (char *)malloc(sizeof(char) * (sum + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0, size = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, size++)
			s[size] = av[i][j];
		s[size] = '\n';
		size++;
	}
	return (s);
}
