#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the ponter address to reallocate
 * @old_size: the current size of allocated memory
 * @new_size: the new size we want to have
 * Return:newly reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	(void)old_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	temp = malloc(new_size);
	if (temp == NULL)
		return (NULL);
	memcpy(temp, ptr, old_size);
	free(ptr);
	return (temp);
}
