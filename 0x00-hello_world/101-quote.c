/**
* main - Entry Point
*
* Description: This program prints out some text
*
* Return: 1 Always
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	int stlength;
	char *snt = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	stlength = strlen(snt);
	write(1, snt, stlength);

	return (1);
}
