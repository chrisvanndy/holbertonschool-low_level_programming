#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: variable gives parameters for printing
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		/*printf("outside loop: x is %d, y is %d, and n is %d", x, y, n);*/
		_putchar('\\');
		_putchar('\n');
		for (y = n - x; y <= n; y++)
		{
		/* printf("inside loop x is %d y is %d and n is %d", x, y, n);*/
			_putchar(' ');
		}
	}
	_putchar('\n');
}

