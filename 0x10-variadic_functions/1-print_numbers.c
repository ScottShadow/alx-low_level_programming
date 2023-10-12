#include "variadic_functions.h"
/**
 * print_numbers - prints all numbers passed
 * @separator: the separator to use
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
