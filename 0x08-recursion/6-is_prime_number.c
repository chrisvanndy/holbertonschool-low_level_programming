#include "holberton.h"
/**
 * is_prime_number - determines if a number is prime or not
 * @n: given integer to test
 *
 * Return: prime
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - is a helper function to test given int
 * @x: some number
 * @o: value
 * return: to prime
 */
int prime(int x, int o)
{
	if (x < 2)
	{
		return (0);
	}
	if (x % o == 0)
	{
		return (0);
	}
	if (o * o < x)
	{
		return (1);
	}

	return (prime(x, (o + 1)));
}
