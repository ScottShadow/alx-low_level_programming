#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string to change to Upper Case
 * Return: the string in all caps
 */
char *string_toupper(char *s)
{
	int ToUpper = 'A' - 'a';
	int size = 0;

	while (*s != '\0')
	{
		size++;
		if (*s >= 'a' && *s <= 'z')
			*s = *s + ToUpper;
		s++;
	}
	return (s - size);
}
