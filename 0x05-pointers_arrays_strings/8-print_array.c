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
	for (n = 0; n < 5; n++)
	{
	if (n <= 3)
	printf("%d, ", a[n]);
	else if (n > 3)
	printf("%d", a[n]);
	}
	printf("\n");
}
