#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
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
