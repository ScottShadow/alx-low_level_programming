#include "variadic_functions.h"
/**
 * print_all - prints all arguements passed
 * @format: the format of the arguements in order, supports (icfs)
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list stuff;

	va_start(stuff, format);
	while (format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%s%c", sep, va_arg(stuff, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(stuff, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(stuff, double));
			break;
		case 's':
			str = va_arg(stuff, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			break;
		}
		sep = ", ";
	}
	va_end(stuff);
	printf("\n");
}
