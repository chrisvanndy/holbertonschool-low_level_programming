#include "holberton.h"
/**
 * times_table - will make print out a times table
 * the table will be line bye line for int 9
 *
 * Return: void
 */
void times_table(void)
{
	int x, y, z;

	for (z = 0; z <= 9; z++)
	{
	for (y = 0; y <= 9; y++)
	{
	x = z;
	x = x * y;
		if (y < 9)
		{
		if (x > 9)
		{
		_putchar(x / 10 + '0');
		}
		if (x < 10)
		{
		_putchar(' ');
		}
		_putchar(x % 10 + '0');
		_putchar(',');
		_putchar(' ');
		}
		else
		{
		if (x > 9)
		{
		_putchar(x / 10 + '0');
		}
		if (x < 10)
		_putchar(' ');
		_putchar(x % 10 + '0');
		_putchar('\n');
		}
	}
}
}
