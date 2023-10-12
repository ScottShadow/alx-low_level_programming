#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

/*common library*/
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <strings.h>
#include <stdarg.h>

/*function prototypes*/

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif /*VARIADIC_FUNCTION_H*/
