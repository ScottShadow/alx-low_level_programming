#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints numbers in a unique way
 * Return: Always 0
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar((char)(first + 48));
			putchar((char)(second + 48));
			if (!(first == 8 && second == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
