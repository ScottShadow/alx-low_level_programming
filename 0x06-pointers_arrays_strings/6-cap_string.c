#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to capitalize
 * Return: capitalized words of the string
 */
char *cap_string(char *s)
{
	int ToUpper = 'A' - 'a';
	int i, isSeparator;
	char *start = s;
	char c[] = {'\t', '\n', ';', ',', '.', '!', '?', '"', '(', ')', '{', '}'};
	int WordEnd = 1; /* will be set to 1 after getting at the end of a word*/

	while (*s != '\0')
	{
		isSeparator = 0;
		for (i = 0; i < 13; i++)
		{
			if (*s == c[i] || *s == ' ')
			{
				WordEnd = 1;
				isSeparator = 1;
				break;
			}
		}

		if (isSeparator == 0)
		{
			if (*s >= 'a' && *s <= 'z' && WordEnd == 1)
			{
				*s += ToUpper;
				WordEnd = 0;
			}
			else
			{
				WordEnd = 0;
			}
		}
		s++;
	}
	return (start);
}
