#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int first, second, third, fourth;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{
			for (third = first; third < 58; third++)
			{
				for (fourth = second + 1; fourth < 58; fourth++)
				{
					putchar((char)(first));
					putchar((char)(second));
					putchar(' ');
					putchar((char)(third));
					putchar((char)(fourth));
					if (first == 57 && second == 56 && third == 57 && fourth == 57)
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
