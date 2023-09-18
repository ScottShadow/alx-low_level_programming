#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *   to the buffer pointed to by dest.
 *
 * @dest: the buffer to copy to
 * @src: the string to copy from
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = *src;
	dest = ret;

	return (dest);
}
