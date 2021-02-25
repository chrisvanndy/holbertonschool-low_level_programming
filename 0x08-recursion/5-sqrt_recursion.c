#include "holberton.h"
/**
 * _sqrt_recursion - natural square of int n
 * @n: given integer
 * Return: square of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 0));
}
/**
 * square - determines wether n is natural square
 * @n: given integer
 * @s: s is guess at square root
 * Return: sqaure
 */
int square(int n, int s)
{
	int sqr;

	sqr = s * s;

	if (sqr == n)
	{
		return (s);
	}
	if (sqr > n)
	{
		return (-1);
	}
	/* call prototype to test other values */
	return (square(n, s + 1));
/* sqr > n & sqr < n */
}
