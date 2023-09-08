#include <stdio.h>
/**
 * main - entry point
 * Description: Prints number
 * Return: Always 0
*/
int main(void)
{
	char my_char = '0';

	while (my_char <= '9')
	{
		putchar(my_char);
		if (my_char == '9')
			break;
		putchar(',');
		putchar(' ');
		my_char++;
	}
	putchar('\n');
	return (0);
}
