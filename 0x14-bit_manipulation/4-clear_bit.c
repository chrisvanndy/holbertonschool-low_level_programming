#include "holberton.h"
/**
 * clear_bit - clears given bit at index
 * @n: given number
 * @index: given index place
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
		return (1);
}

