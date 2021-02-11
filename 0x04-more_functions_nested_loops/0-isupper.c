#include "holberton.h"
/**
 * _isupper - determines if character is lower or uppercase
 * @c: variable to test if upper or lower
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	return (0);
}
