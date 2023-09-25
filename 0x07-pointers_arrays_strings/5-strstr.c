#include "main.h"

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
	unsigned int i, size = 0;
	unsigned int count = 0;
	char *h = haystack, *n = needle;

	/*calculate the size of the needle*/
	for (i = 0; needle[i] != '\0'; i++)
		size++;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0')
		{
			if (*h == *n)
			{
				count++;
				h++;
				n++;
			}
			else
			{ /*if needle doesnt match next haystack reset*/
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
