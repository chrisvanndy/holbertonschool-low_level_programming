#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
