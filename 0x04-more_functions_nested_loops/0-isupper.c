#include "holberton.h"
/**
 * _isupper - determines if character is lower or uppercase
 * @c: variable to test if upper or lower
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 41 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
