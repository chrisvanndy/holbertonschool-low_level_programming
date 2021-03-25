#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - prints bit at given index
 * @n: given integer -- convert to binary then search index
 * @index: given index to print 
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
