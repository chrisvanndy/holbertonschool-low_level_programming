#include "holberton.h"
/**
 * print_triangle - prints shapes with given character
 * @size: indicates the "height" of the shapes
 *
 * return: 0
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{

		for (y = x; y < size; y++)
		{
			_putchar(' ');
		}

		for (y = 1; y <= x; y++)
		{
			_putchar('#');
		}

	_putchar('\n');

	}
}
