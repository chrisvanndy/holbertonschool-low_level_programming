#include "holberton.h"
/**
 * _memcpy - copies string to dest
 * @n: given value of index
 * @src: given string to copy into dest
 * @dest: given destination for string to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
