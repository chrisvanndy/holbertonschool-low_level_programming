#include "holberton.h"
/**
 * _isdigit - checks for a digit 0 - 9
 * @c: digit to test if 0-9
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	return (0);
}
