#include "holberton.h"
/**
 * print_line - draws line in stdout using "_"
 * @n: variable defines number of "_" printed
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
