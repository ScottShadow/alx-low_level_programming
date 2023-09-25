#include "main.h"
/**
 *  _memset - fill memory with a constant byte
 *
 *	@s:  A pointer to the memory block to be filled.
 *	@b: value: The value to be set. It's an integer but
 *	typically treated as an unsigned char or a byte.
 *	@n: The number of bytes to be set to the specified value.
 *	Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
