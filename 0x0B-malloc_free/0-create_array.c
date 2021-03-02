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

	char* charptr = (char*) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		charptr[i] = c;
	}

	return (charptr);

	free(charptr);
}
