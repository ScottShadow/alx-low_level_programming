#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int first, second, third;

	for (first = 48; first < 58; first++)
	{
		for (second = first + 1; second < 58; second++)
		{
			for (third = second + 1; third < 58; third++)
			{
				putchar((char)(first));
				putchar((char)(second));
				putchar((char)(third));
				if (first == 55 && second == 56 && third == 57)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
