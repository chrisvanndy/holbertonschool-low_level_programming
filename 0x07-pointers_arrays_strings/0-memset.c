#include "holberton.h"
/**
 * _memset - pointer to buffer / constant b / unsigned int n = index
 * @s: pointer to buffer / array
 * @b: constant value
 * @n: index value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *buffer = s, value = b;

	for (index = 0; index < n; index++)
		buffer[index] = value;

	return (s);
}

