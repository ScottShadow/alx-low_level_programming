#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints double numbers as char in a unique combination
 * Return: Always 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar((char)(n1 + 48));
			putchar((char)(n2 + 48));
			if (!(n1 == 8 && n2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
