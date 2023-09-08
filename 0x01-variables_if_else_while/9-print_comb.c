#include <stdio.h>
/**
 * main - entry point
 * Description: Prints number
 * Return: Always 0
*/
int main(void)
{
	int my_char = 48;

	while (my_char <= 57)
	{
		putchar(my_char);
		if (my_char == 57)
			break;
		putchar(',');
		putchar(' ');
		my_char++;
	}
	putchar('\n');
	return (0);
}
