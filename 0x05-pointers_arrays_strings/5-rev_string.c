#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: the string to print
 */
void rev_string(char *s)
{
	char *end = s; /*  copies the string address*/

	while (*end != '\0') /* loops until end of the string */
	{
		end++; /* increment end, find the address end of the string*/
	}

	end--; /* move up from terminator position */
	while (s < end)
	{
		char rev = *s;
		*s = *end; /* swapps two */
		*end = rev;

		end--;
		s++;
	}
}
