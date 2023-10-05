#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size to allocate
 * Return: the pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	/*check if malloc was successful*/
	if (p == NULL)
		exit(98);
	return (p);
}
