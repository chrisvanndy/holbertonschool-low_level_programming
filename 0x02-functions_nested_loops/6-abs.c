#include <stdio.h>
#include "holberton.h"
/**
 * _abs - checks absolute value of r
 * returns the variable
 *
 * Return: r
 */
int _abs(int r)
{
	if (r < 0)
	{
	r = (-1) * r;
	}

	return (r);
}
