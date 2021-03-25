#include "holberton.h"
/**
 * set_bit - reset value at given index to one
 * @n: given number
 * @index: given index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
		return (1);
}
