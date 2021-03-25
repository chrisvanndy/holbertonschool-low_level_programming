#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - returns unsigned in from binary arg
 * @b: binary argument passed to function
 *
 * Return: unsigned int (b)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);
	for (result = 0; *b != '\0'; b++)
	{
	if (*b < 48 || *b > 49)
		return (0);
	if (*b == '1')
		result = (result << 1) | 1;
	else if (*b == '0')
		result <<= 1;
	else
		break;
	}
	return (result);

}
