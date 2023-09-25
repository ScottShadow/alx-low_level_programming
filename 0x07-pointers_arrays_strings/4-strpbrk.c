#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -function locates the first occurrence in
 * the string s of any of the bytes in the string accept
 * @s: the string to look into
 * @accept: the string to look for
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
