#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: A pointer to the destination memory
 * location where the data will be copied.
 * @src: A pointer to the source memory
 * location from which data will be copied.
 * @n: The number of bytes to copy from
 * the source to the destination.
 *
 * Return: function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
