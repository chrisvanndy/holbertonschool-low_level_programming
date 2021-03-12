#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * type - structure for array of structures
 *
 * @input: string type from format string
 * @formtype: pointer to function to assign printing
 */
typedef struct type
{
	char *input;
	void (*formtype)(va_list strings);
} typecheck_t;

void printchar(va_list strings);
void printint(va_list strings);
void printstring(va_list strings);
void printfloat(va_list strings);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
