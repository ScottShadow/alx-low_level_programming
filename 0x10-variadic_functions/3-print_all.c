#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all arguements passed
 * @format: the format of the arguements in order, supports (icfs)
 */
void print_all(const char *const format, ...)
{
	va_list stuff;
	int skipped, i = 0;
	char *str;

	va_start(stuff, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(stuff, int));
			break;
		case 'i':
			printf("%d", va_arg(stuff, int));
			break;
		case 'f':
			printf("%f", va_arg(stuff, double));
			break;
		case 's':
			str = va_arg(stuff, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			skipped = 1;
			break;
		}
		if (format[i] != '\0' && skipped-- != 1)
			printf(", ");
	}
	printf("\n");
	va_end(stuff);
}
