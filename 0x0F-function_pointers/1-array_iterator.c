#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates throug array performs function subtask
 * @array: given array
 * @size: size_t is unsigned int (size of array)
 * @action: function pointer given as argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
