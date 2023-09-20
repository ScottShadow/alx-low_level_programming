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
	int i;
	int size = 0;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
		size++;
		if (*src == '\0')
			break;
	}
	while (*dest != '\0')
	{
		if (size >= n + 1)
			break;
		*dest = '\0';
		dest++;
		size++;
	}

	return (dest - (n + 1));
}
