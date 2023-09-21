#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @c: the string to encrypt
 * Return: encrypted string
 */
char *rot13(char *c)
{
	char *output = c;
	int encrypt = 13;

	while (*c != '\0')
	{
		/* while instead of if, because requirements allow use of only one if*/
		while ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		{

			if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
				encrypt = -13;
			else
				encrypt = 13;
			*c = *c + encrypt;
			break;
		}
		c++;
	}
	return (output);
}
