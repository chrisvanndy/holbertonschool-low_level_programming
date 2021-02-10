#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && c > b && c < a)
	{
		largest = a;
	}
	else if (b > a && a > c && c < b)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
