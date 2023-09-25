#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	int counter, counter2;

	counter = size + 1;
	counter2 = size;
	size = size * size;
	for (i = 0; i < size; i = i + counter)
		sum1 += *(a + i);

	for (i = (size - counter2); i > 0; i = i - (counter2 - 1))
		sum2 += *(a + i);

	printf("%d, %d\n", sum1, sum2);
}
