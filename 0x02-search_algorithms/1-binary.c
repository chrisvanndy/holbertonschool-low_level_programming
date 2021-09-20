#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

/**
 * binary_search - searches an array for give value.
 * @array: the array to be searched.
 * @size: the size of the array being searched.
 * @value: the value being searched for
 * Return: the array index holding the value, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");

		for (i = start; i < end; i++)
		printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			start = mid + 1;

			if (start > end)
				return (-1);
		}

		if (array[mid] > value)
		{
			end = mid - 1;
			if (end < start)
				return (-1);
		}
	}
	return (-1);
}
