#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free grid
 * @grid: grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	(void)height;
	free(grid);
}
