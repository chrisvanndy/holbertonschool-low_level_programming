#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers from given list
 * @separator: give "separator" of listed integers
 * @n: number of integers being passed
 * Return void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(theNumbers);

	va_start(theNumbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(theNumbers, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf ("\n");

	va_end(theNumbers);
}
