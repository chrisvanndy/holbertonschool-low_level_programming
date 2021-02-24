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
	int x, diag1, diag2;

	for (x = 0, diag1 = 0; x < (size * size); x += (size + 1))
	{
		diag1 += a[x];
	}
	for (x = 0 diag2 = 0; x < (size * size) - size + 1; x += (size - 1))
	{
		diag2 += a[x];
	}
	printf("%d, %d\n", diag1, diag2);
}
