#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_buffer - prints address in x08 , address of char in x02 and the string
 * @b: the buffer to print
 * @size: the size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;
	char *s = b;
	int size2 = ((size / 10) * 10) + 10;

	for (i = 1; i <= size2; i++)
	{
		if (i == 1)
			printf("%08x: ", i - 1);
		if (i <= size)
			printf("%02x", *b);
		if (i > size)
			printf("  ");

		if (i % 2 == 0)
			printf(" ");

		if ((i % 10 == 0 || i == size) && i <= size)
		{
			j = 0;
			while (j < 10)
			{

				if (j == (size % 10) && i == size)
					break;
				if (*s >= 32 && *s <= 126)
					putchar(*s);
				else
					putchar('.');
				s++;
				j++;
			}
			printf("\n");
			if (i % 10 == 0 && i != 1 && i != size2)
				printf("%08x: ", i);
		}
		b++;
	}
}
