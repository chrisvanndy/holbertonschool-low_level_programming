#include "holberton.h"
/**
 * count_setbits - counts number of bits that are flipped
 * @n: given int
 * @m: given int
 * Return: int (count)
 */
unsigned int count_setbits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}

	return (count);
}
/**
 * flip_bits - flips bits between two given ints
 * @n: given int
 * @m: given int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_setbits(n ^ m));
}
