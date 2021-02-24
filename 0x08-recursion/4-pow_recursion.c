#include "holberton.h"
/**
 * _pow_recursion - function returns x ^ y
 * @x: int to be raised by power of y
 * @y: given int to raise x to power of
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	else
	return (x * _pow_recursion(x, y - 1));
}
