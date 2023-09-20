#include "main.h"
#include <stdlib.h>
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

	while (*dest != '\0')
	{
		/* printf("counted dest++\n"); */
		size++;
		dest++;
	}

	/* printf("size of source : %d\n", size); */
	while (*src != '\0')
	{
		/* printf("set %c to %c\n", *dest, *src); */
		*dest = *src;
		dest++;
		src++;
		size++;
		counter++;
		if (counter == n)
			break;
	}

	*dest = '\0'; /* end the string with a null terminator */
	return (dest - size);
}
