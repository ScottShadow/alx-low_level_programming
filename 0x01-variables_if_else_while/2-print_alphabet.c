#include <stdio.h>
/**
* main - Entry Point
* Description Prints a-z using while loop
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
	putchar('\n');
	return (0);
}
