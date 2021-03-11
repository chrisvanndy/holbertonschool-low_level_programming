#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - takes given list of ints and sums all
 * @n: list of
 *
 * Return: sum = sum of all ints in given list
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
	{
		return (0);
	}

		for (i = 0; i < n; i++)
		{
			sum += va_arg(numbers, int);
		}

	va_end(numbers);

	return (sum);

}
