#include "main.h"
/**
 * _strncpy -  function that copies a string, exactly like strncpy
 * @dest: the string to copy to
 * @src: the string to copy
 * @n: the number of characters to copy
 * Return: the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0;
	char *ret = dest;

	while (*src != '\0' && size < n)
	{
		*dest = *src;
		dest++;
		src++;
		size++;
	}
	while (*dest != '\0' && size != n)
	{
		*dest = '\0';
		dest++;
		size++;
	}

	return (ret);
}
