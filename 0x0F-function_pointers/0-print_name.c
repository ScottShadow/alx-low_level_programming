#include "function_pointers.h"
/**
 * print_name - function prints name
 * @name: the name to print
 * @f: function pointer passed
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	free(f);
}
