#include "main.h"
char *movetodot(char *s)
{
	if (*s == '\0')
		return (s);
	if (*s == '.')
		return (s);
	return (movetodot(++s));
}
int wildcheck(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (0);
	if (*s2 == '.')
		s1 = movetodot(s1);
	return (wildcmp(s1, s2));
}
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wildcheck(s1, ++s2));

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}