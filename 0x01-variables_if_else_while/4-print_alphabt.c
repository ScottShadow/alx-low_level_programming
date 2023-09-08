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
		if (my_char == 'q' || my_char == 'e')
		{
			my_char++;
		}
		putchar(my_char);
		my_char++;
	}
	putchar('\n');
	return (0);
}
