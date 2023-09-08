#include <stdio.h>
/**
 * main - entry point
 * Description: Prints characters both uppercase and lowercase
 * Return: Always 0
*/
int main(void)
{
	char my_char = 'a';

	while (my_char < 123)
	{
		putchar(my_char);
		my_char++;
	}
	my_char = 65;
	while (my_char < 91)
	{
		putchar(my_char);
		my_char++;
	}
	putchar('\n');
	return (0);
}
