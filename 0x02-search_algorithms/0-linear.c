#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches an array for give value.
 * @array: the array to be searched.
 * @size: the size of the array being searched.
 * @value: the value being searched for
 * Return: the array index holding the value, or -1
 */

int linear_search(int *array, size_t size, int value)
{

	if (array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%zu] = [%i]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
