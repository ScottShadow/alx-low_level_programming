#include "main.h"
#include <stddef.h>
/**
 * _strchr - function returns a pointer to the first occurrence of
 *  the character @c in the string @s
 * @c: the character to find
 * @s: the string to look in
 *
 * Return: return a pointer to the matched character or NULL
 * if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c) /*check if its '\0'*/
		return (s);
	return (NULL);
}
