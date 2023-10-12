#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	return (sum);
}