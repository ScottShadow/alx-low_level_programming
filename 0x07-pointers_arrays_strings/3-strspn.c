#include "main.h"
/**
 * _strspn - calculates the length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: A pointer to the string you want to search within.
 * @accept: A pointer to the string containing the characters to search for.
 * Return: returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i, j;

	for (j = 0; s[j] != '\0' && s[j] != ' '; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				count++;
		}
	}
	return (count);
}
