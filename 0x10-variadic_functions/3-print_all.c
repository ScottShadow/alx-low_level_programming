#include "variadic_functions.h"
/**
 * print_all - prints all arguements passed
 * @format: the format of the arguements in order, supports (icfs)
 */
void print_all(const char *const format, ...)
{
	va_list stuff;
	int i = 0;
	char *str;

	va_start(stuff, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
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
			i++;
			continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(stuff);
}
