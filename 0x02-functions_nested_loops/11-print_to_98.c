#include <stdio.h>
#include "main.h"
/**
 *  print_to_98 - prints all natural numbers from n to 98, followed
 *  by a new line.
 *  @n: endpoint
 */
void print_to_98(int n)
{
	int i = n;
	int step;

	if (n > 98)
		step = -1;
	if (n < 98)
		step = 1;
	if (n == 98)
		step = 0;
	while (1 == 1)
	{
		printf("%d", i);
		if (i == 98)
			break;
		if (i != 98)
		{
			printf(", ");
		}
		i = i + step;
	}
	printf("\n");
}
