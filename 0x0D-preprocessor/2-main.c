#include <stdio.h>
/**
 * main - entry point
 * Description: prints name of current file using macro __file__
 * Return: Always(0)
 */
int main(void)
{
	char name[] = __FILE__;

	printf("%s\n", name);
	return (0);
}
