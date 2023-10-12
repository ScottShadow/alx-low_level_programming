#include "variadic_functions.h"
/**
 * print_all - prints all arguements passed
 * @format: the format of the arguements in order, supports (cifs)
 */
void print_all(const char *const format, ...)
{
	va_list stuff;
	int n, skipped, type = 0, i = 0;
	float f;
	char *str, c;

	va_start(stuff, format);
	while (format[i] != '\0')
	{
		type = format[i++];
		skipped = 0;
		switch (type)
		{
		case 'c':
			c = va_arg(stuff, int);
			printf("%c", c);
			break;
		case 'i':
			n = va_arg(stuff, int);
			printf("%d", n);
			break;
		case 'f':
			f = va_arg(stuff, double);
			printf("%f", f);
			break;
		case 's':
			str = va_arg(stuff, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			skipped = 1;
			break;
		}
		if (format[i] != '\0' && skipped != 1)
			printf(", ");
	}
	printf("\n");
}
