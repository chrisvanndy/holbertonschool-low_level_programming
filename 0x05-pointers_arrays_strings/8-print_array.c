#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: points to values in array
 * @n: refers to index value in array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i < n - 1)
	printf("%d, ", a[i]);
	else
	printf("%d", a[i]);
	}
	printf("\n");
}