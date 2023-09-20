#include "main.h"
/**
 * _strncat - concatenates two strings with a specified amount of characters @n
 * @dest: destination string
 * @src: string to append
 * @n: the amount of characters to append
 * Return: concatenated string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0;
	int counter = 0;
	char *ret = dest;

	while (*dest != '\0')
	{
		/* move to the end of dest */
		size++;
		dest++;
	}

	while (*src != '\0' && counter != n)
	{

		*dest = *src;
		dest++;
		src++;
		size++;
		counter++;
	}

	*dest = '\0'; /* end the string with a null terminator */
	return (ret);
}
