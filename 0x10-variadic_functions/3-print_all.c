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
		type = format[i];
		i++;
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
			printf("%s", str);
			break;
		default:
			/* @skipped: allows to handle type mismatch*/
			skipped = 1;
			break;
		}
		/*prints separator if not at the end or if none were skipped*/
		if (format[i] != '\0' && skipped != 1)
			printf(", ");
	}
	printf("\n");
}
