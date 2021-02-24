#include "holberton.h"
/**
 * factorial - returns factorial of give int (n)
 * @n: given int from main
 * Return: !n
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 1)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}

}
