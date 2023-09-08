#include <stdio.h>
/**
 * main - entry point
 * Description: Prints number
 * Return: Always 0
 */
int main(void)
{
	char t = '0';

	while (t < 58)
	{
		putchar(t);
		t++;
	}
	t = 97;
	while (t < 103)
	{
	putchar(t);
	t++;
	}
	putchar('\n');
	return (0);
}
