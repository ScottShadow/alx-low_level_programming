#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the size of the array
 * @size: the type size of members of the array
 * Return: pointer with zero initialized
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	p = malloc(size * (nmemb + 1));
	if (p == NULL)
		return (NULL);
	if (size == 0 && nmemb == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = 0;
	}
	p[nmemb] = '\0';
	return (p);
}
