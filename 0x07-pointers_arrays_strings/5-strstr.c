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
	char *h = haystack, *n = needle;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0')
		{
			if (*h == *n)
			{
				h++;
				n++;
			}

			if (*n == '\0')
				return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
