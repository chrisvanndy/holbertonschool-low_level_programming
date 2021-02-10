#include "holberton.h"

/**
 * _abs - absolut value of a number
 * @r: value passed through to determine abs val
 *
 * Return: 0
 */
int _abs(int r)
{
	if (r < 0)
	{
	r = (-1) * r;
	}

	return (r);
}

/**
 * print_last_digit - printing last digit of a number
 * @n: number passed through to find last digit
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last;

	last = _abs(n % 10);
	_putchar(last + '0');

	return (last);
}
