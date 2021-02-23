#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal of square matrix
 * @a: array variable
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			diag1= sum + a[i][j];
			if (i + j == (size-1))
			diag2= sum + a[i][j];
		}
	}
printf("%d, ", diag1);
printf("%d\n", diag2);
}
