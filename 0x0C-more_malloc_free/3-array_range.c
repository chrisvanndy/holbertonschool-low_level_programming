#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - allocate memory for int array
 * @min: min array member
 * @max: max array member
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
