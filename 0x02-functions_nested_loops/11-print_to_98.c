#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - inc or dec to 98 from given number
 * @n: variable used to int or dec from
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
	for (x = n; x >= 98; x--)
	{
	printf("%d, ", x);
	if (x == 98)
	{
	printf("98\n");
	}
	}
	}
	else if (n < 98)
	{
	for (x = n; x <= 98; x++)
	{
	printf("%d, ", x);
	if (x == 98)
	{
	printf("98\n");
	}
	}
	}
	else
	printf("98\n");
}
