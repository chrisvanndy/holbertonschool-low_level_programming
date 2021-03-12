#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/** 
 * print_strings - takes char* arguments and prints 
 * @separator: given constant string
 * @n: fixed number of arguments being passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;

	va_list(strings);

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(strings, char*);
		if (tmp != NULL)
		{
			printf("%s", tmp);
		}
		else
		{
			printf("nil");
		}
		if (separator != NULL && i != n -1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
