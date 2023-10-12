#include "variadic_functions.h"
void print_all(const char *const format, ...)
{
	va_list stuff;
	int type = 0;
	int n, i = 0, skipped;
	char c;
	float f;
	char *str;

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
			skipped = 1;
			break;
		}
		if (format[i] != '\0' && skipped != 1)
			printf(", ");
	}
	printf("\n");
}