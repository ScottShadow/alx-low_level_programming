#include <stdio.h>
#include "main.h"
/**
 * _strncpy -  function that copies a string, exactly like strncpy
 * @dest: the string to copy to
 * @src: the string to copy
 * @n: the number of string to copy
 * Return: the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0;
	char *ret = dest;

	while (*src != '0' && size <= n - 1)
	{
		*dest = *src;
		dest++;
		src++;
		size++;
	}
	while (*dest != '\0')
	{
		if (size == n)
			break;
		*dest = '\0';
		dest++;
		size++;
	}

	return (ret);
}
