#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * positive_or_negative - Test for sign
 * Description: prints pos for + neg for - and 0 for z
 * Return: Always 0
 * @n: integer to test
 */
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
}
