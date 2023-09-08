#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int first, second;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{

			putchar((char)first);
			putchar((char)second);
			putchar(' ');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
