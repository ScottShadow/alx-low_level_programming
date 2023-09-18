#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int i = 0, sum = 0, temp;
	int *pass = malloc(sizeof(int) * 1);
	char p;
	const int MAX_PASSWDSIZE = 2772;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		*pass = rand() % 78;
		p = *pass + '0';
		sum = sum + p;
		putchar(p);

		if ((MAX_PASSWDSIZE - sum) - '0' < 78)
		{
			temp = MAX_PASSWDSIZE - sum;
			putchar(temp);
			sum = sum + temp - '0';
			break;
		}
	}
	return (0);
}
