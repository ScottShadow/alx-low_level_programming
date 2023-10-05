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
	char *p;
	unsigned int i;

	/*if zero, nothing to initialize*/
	if (size == 0 || nmemb == 0)
		return (NULL);
	/*malloc with null check*/
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	/*assigning all values of p to zero(0)*/
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
