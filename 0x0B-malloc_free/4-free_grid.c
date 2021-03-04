#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free grid
 * @grid: pointer to pointer
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);
	if (height == NULL)
	{
		while (height >= 0)
		{
			return (NULL);
			height--;
		}
	free(grid);
	}
}
