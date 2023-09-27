#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	int size = 0;

	size = _count(s, size) - 1;

	_puts_recursion((s + size));
}
/**
 * _count - counts the number of characters in a string
 * @p: the string to count
 * @size: initial size val
 * Return: the size of the string
 */
int _count(char *p, int size)
{
	if (*p == '\0')
		return (size);

	return (_count(++p, ++size));
}
/**
 * _puts_recursion - prints a line with recursion
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(--s);
}
