#include "main.h"
#include <stddef.h>
/**
 * _strstr - locate a substring
 * @haystack: A pointer to the string you want to search
 *  within (the larger string)
 * @needle: A pointer to the substring you want to find within
 * the haystack (the smaller string)
 * Return: a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned long int i, size = 0;
	unsigned long int count = 0;
	char *h = haystack, *n = needle;

	for (i = 0; needle[i] != '\0'; i++)
		size++;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0')
		{
			if (*h == *n && (*n != '\0' || *h != '\0'))
			{
				count++;
				h++;
				n++;
			}
			else
			{
				count = 0;
				break;
			}
			if (count == size)
				return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
