#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - print any type of argument
 * @format: format type to pass to function
 * Return: void
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0, x;
	char *spacer = "";
	va_list strings;
	typecheck_t specifiers[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};

va_start(strings, format);

	while (format[i] != '\0' && format != NULL)
	{
		x = 0;
		while (specifiers[x].input != NULL)
		{
			if (format[i] == specifiers[x].input[0])
			{
				printf("%s", spacer);
				specifiers[x].formtype(strings);
				spacer = ", ";
			}
			x++;
		}
	i++;
	}
	printf("\n");
	va_end(strings);
}
/**
 * printchar - prints va_arg of type char
 * @strings: variadic argument being passed
 * Return: void
 */
void printchar(va_list strings)
{
	printf("%c", va_arg(strings, int));
}
/**
 * printint - prints va_arg of type int
 * @strings: variadic argument being passed
 * Return: void
 */
void printint(va_list strings)
{
	printf("%d", va_arg(strings, int));
}
/**
 * printfloat - prints va_arg of type float
 * @strings: variadic argument being passed
 * Return: void
 */
void printfloat(va_list strings)
{
	printf("%f", va_arg(strings, double));
}
/**
 * printstring - prints va_arg of type float
 * @strings: variadic argument being passed
 * Return: void
 */
void printstring(va_list strings)
{
	if (strings == NULL)
	{
		printf("(nil)");
			return;
	}
	printf("%s", va_arg(strings, char*));
}
