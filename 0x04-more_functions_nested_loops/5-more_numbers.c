#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 1; y <= 10; y++)
	{
	for (x = 0; x <= 14; x++)
	{
	if (x > 9)
	{
	_putchar(x / 10 + '0');
	}
	_putchar(x % 10 + '0');
	}
	_putchar('\n');
	}
}
