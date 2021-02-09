#include "holberton.h"
/**
 * print_sign - prints the (+/-) sign of a number.
 * return of -1 will return '/'
 *
 * Return: 0, 1, -1 respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
