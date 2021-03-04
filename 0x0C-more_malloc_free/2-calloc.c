#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - initializing index values to zero
 * @size: size of string
 * @nmemb: members of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = 0;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < (nmemb * size); i++)
	{
		_putchar(ptr[i]);
	}

	return (ptr);
}
