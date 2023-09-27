#include "main.h"
#include <stdio.h>
/**
 * count - counts the number of characters pointed to by s
 * @size: counter, should start from 0
 * @s: the string to count
 * Return: size of the string s
 */
int count(int size, char *s)
{
	if (*s == '\0')
		return (size);

	return (count(++size, ++s));
}
/**
 * _palindrome_check - helper function to check for palindrome
 * @s: the string to check
 * @size: the size of the string
 * @i: counter
 * Return: 1 (SUCCESS) if the string is a palindrome else 0(FAIL).
 */
int _palindrome_check(char *s, int size, int i)
{
	if ((i == size || i + 1 == size) && s[i] == s[size])
		return (1);
	if (s[i] != s[size])
		return (0);

	return (_palindrome_check(s, --size, ++i));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: the string to check
 * Return: 1 (SUCCESS) if the string is a palindrome else 0(FAIL).
 */
int is_palindrome(char *s)
{
	int size;

	size = count(0, s) - 1;
	return (_palindrome_check(s, size, 0));
}
