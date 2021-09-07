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
 * Returns - the array index holding the value, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t i;
		size_t low = 0;
		size_t high = (size - 1);

		printf("ARRAY VALUES\n");
		printf("low = %zu\n", low);
		printf("high = %zu\n\n", high);

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{

			if (i == high)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		}
		
		printf("ENTERING THE LOOP!!\n");

		while (array[low] <= array[high])
		{
			int C = 1;
			size_t mid = (low + high / 2);

			printf("%d LOW == %zu\n", C, low);
			printf("%d MID == %zu\n", C,mid);
			printf("%d HIGH == %zu\n", C, high);

			sleep(5);

			if (mid == high)
			{
				printf("Searching in array: ");
				printf("%zu\n", mid);
				if (value != array[mid])
					return (-1);
			}
			else if (value < array[mid])
			{
				high = mid - 1;
				printf("Searching in array: ");
				for (i = low; i <= high; i++)
				{
					if (i == high)
						printf(" %d\n", array[i]);
					else
						printf(" %d,", array[i]);
				}
			}
			else if (value > array[mid])
			{
				printf("INSIDE v > array[mid]\n");
				printf("array[mid] = %d\n", array[mid]);
				printf("value = %d\n", value);
				printf("size = %zu", size);
				printf("low = %zu\n", low);
				printf("mid = %zu\n", mid);
				printf("high = %zu\n", high);

				low = mid;
			
				
				printf("DETERMINE MID\n");
				printf("%zu + %zu / 2\n", low, high);

				mid = ((low + high) / 2);
				
				printf("NEW MID = %zu\n", mid);
				sleep(5);


				printf("Searching in array: ");
				for (i = low + 1; i <= high; i++)
				{
					if (i == high)
						printf(" %d\n", array[i]);
					else
						printf(" %d,", array[i]);
				}
			}
			else if (value == array[mid])
			{
				return mid;
			}
			else
				return (-1);
			
			printf("END OF LOOP");

		}
	}
	return (0);
}
