#include "holberton.h"
/**
 * get_endianness - returns little or big
 *
 * Return: int
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	if (*y + 48 == 48)
		return (0);
	else
		return (1);
}
