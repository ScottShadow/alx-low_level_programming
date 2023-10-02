#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 *  it with a specific char.
 * @size: amount of space to allocate
 * @c: the character to initialize
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		arr[i] = c;
	}

	if (arr == NULL)
		return (NULL);
	return (arr);
}