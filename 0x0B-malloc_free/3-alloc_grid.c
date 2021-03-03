#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocating memory for 2D array
 * @width: array width
 * @height: array height:
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;

	int **grid;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
			return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}
	return (grid);
}
