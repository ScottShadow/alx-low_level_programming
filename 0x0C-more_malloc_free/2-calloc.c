#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: size of the array
 * @size: the size type of members
 * Return: pointer to newly allocated memoblock
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if ((size == 0) && !nmemb)
		return (NULL);
	return ((void *)malloc(size * nmemb));
}
