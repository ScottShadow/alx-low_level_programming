#include "main.h"
#include <stdio.h>
#include <math.h>

void print_buffer(char *b, int size)
{
	int i = 0, j;
	char *s = b;
	/*double size2 = ceil(size / 10) * 10;*/

	for (i = 1; i <= size; i++)
	{
		if (i == 1)
			printf("%08x: ", i - 1);

		printf("%02x", *b);

		if (i % 2 == 0)
			printf(" ");

		if (i % 10 == 0 || i == size)
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
			if (i % 10 == 0 && i != 1 && i != size)
				printf("%08x: ", i);
		}
		b++;
	}
}
