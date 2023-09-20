#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @c: string to encode
 * Return: returns encoded string
 */
char *leet(char *c)
{
	char *s = c;
	char ToSwitch[] = "aeotl";
	char ToSwitchU[] = "AEOTL";
	char ToSwitchTo[] = "43071";
	int i;

	while (*c != '\0')
	{
		for (i = 0; i < 6; i++)
		{
			if (*c == ToSwitch[i] || *c == ToSwitchU[i])
			{
				*c = ToSwitchTo[i];
			}
		}
		c++;
	}
	return (s);
}
