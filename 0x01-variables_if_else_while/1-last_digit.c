#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Description: prints numbers in a unique way
 * Return: Always 0
 */
int main(void)
{
	int n, my_var;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	my_var = n % 10;
	if (my_var > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, my_var);
	if (my_var < 6 && my_var != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, my_var);
	if (my_var == 0)
		printf("Last digit of %d is %d and is 0\n", n, my_var);
	return (0);
}
