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
	(void) height;
	free(grid);
}
