#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - compares elements in an array for desired values
 * @array: given array
 * @size: size of the array
 * @cmp: pointer to function to be used to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	}
	return (-1);
}
