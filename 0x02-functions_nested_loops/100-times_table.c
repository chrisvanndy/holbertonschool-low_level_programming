#include "holberton.h"
/**
 * print_times_table - creates matrix of "n" and its times table
 * @n: n = size of give times table matrix
 *
 * Return: void
 */
void print_times_table(int n)
{
	int h, x, i;
	

	for (h = 0; h <= n; h++)
	{
		if (n < 0 || n > 15)
			continue;
		for (x = 0; x <= n; x++)
		{
		i = h * x;
			if (i >= 100)
			{
			_putchar((i / 100) + '0');
			_putchar(((i / 10) % 10) + '0');
			}
			else if (i >=  10)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			if (x < n)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (i <= 9  && x < n)
			{
			_putchar(' ');
			_putchar(' ');
			}
			if (i > 9 && i < 100 && x < n)
			_putchar(' '); 
		}
	_putchar('\n');
	}
}

