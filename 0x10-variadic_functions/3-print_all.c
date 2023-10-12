#include "variadic_functions.h"
/**
 * print_all - prints all arguements passed
 * @format: the format of the arguements in order, supports (icfs)
 */
void print_all(const char *const format, ...)
{
	va_list stuff;
	int i = 0;
	char *str, *sep = "";

	va_start(stuff, format);
	while (format[i] != '\0')
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
			{
				printf("%s(nil)", sep);
				break;
			}
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
