#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal lines of square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, diag1 = 0, diag2 = 0;

	for (x = 0; x < (size * size); x += (size + 1))
	{
		diag1 += a[x];
	}
	for (y = 0; y < (size * size) - size + 1; y += (size - 1))
	{
		diag2 += a[y];
	}
	printf("%d, %d\n", diag1, diag2);
}
