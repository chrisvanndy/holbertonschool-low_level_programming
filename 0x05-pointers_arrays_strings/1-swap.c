#include "holberton.h"
/**
 * swap_int - swaps values of two given integers
 * @a: pointer to swap value a
 * @b: pointer to swap value b
 *
 * Return: o
 */
int swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	return (0);
}
