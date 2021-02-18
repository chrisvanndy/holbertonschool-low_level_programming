#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: refference to the array
 * @n: itterating variable
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

