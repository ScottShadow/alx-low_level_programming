#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "asd\0asw\0das\0";
	char *f = "\0";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
