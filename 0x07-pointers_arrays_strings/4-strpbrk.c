#include "main.h"
#include <stddef.h>

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