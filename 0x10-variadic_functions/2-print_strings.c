#include "variadic_functions.h"
/**
 * print_strings - prints all strings passed
 * @separator: separator to use
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list strs;
	char *str;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);
		if (str != NULL)
			printf("%s", str);
		else if (str == NULL)
			printf("(nil)");
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
