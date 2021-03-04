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

	for (i = 0; i < height; i++)
	{
		free(grid[i];
	}

	free(grid);
}
