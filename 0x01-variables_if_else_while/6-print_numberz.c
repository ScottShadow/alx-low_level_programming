#include <stdio.h>
/**
 * main - entry point
 * Description: Prints number
 * Return: Always 0
*/
int main(void)
{
	int counter = 48;

	while (counter < 58)
	{
		putchar(counter);
		counter++;
	}
	putchar('\n');
	return (0);
}
