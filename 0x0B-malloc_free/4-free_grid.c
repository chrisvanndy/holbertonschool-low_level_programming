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

	if (grid == NULL)
		return;

	while (height >= 0)
	{
		free(grid[height]);
		height--;
		return;
	}

	free(grid);

}
