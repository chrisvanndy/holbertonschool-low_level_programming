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
	int x, d1, d2;

	for (x = 0, d1 = 0; x < (size * size); x += (size + 1))
	{
		d1 += a[x];
	}
	for (x = (size - 1), d2 = 0; x < (size * size) - size + 1; x += (size - 1))
	{
		d2 += a[x];
	}
	printf("%d, %d\n", d1, d2);
}
