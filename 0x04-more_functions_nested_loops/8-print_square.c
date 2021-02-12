#include "holberton.h"
/**
 * print_square - prints square with character
 * @size: size of square line x column
 *
 * return: null
 */
void print_square(int size)
{
	int x;
	int y;

	if ( size <= 0)
	{
		_putchar('\n');
	}

	for (x = 0; x < size; x++)
	{
					/*printf("X=%d Y=%d size= %d", x, y, size);*/
		for (y = 0; y < size; y++)
		{
			_putchar('#');
					/*printf("X=%d Y=%d size= %d", x, y, size);*/
		}
			_putchar('\n');
	}
}
