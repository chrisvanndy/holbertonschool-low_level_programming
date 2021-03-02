#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function creates array with pre assigned first char
 * @c: defined char
 * @size: size of array
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *charptr = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (charptr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		charptr[i] = c;
	}

	return (charptr);

}
