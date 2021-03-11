#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: given int
 * @b: given int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subratcts two integers
 * @a: given integer
 * @b: given integer
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: given integer
 * @b: given ingeter
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: given integer
 * @b: giveen integer
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - divides two integers and gives remainder
 * @a: given integer
 * @b: given integer
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
		exit(100);
	}
	return (a % b);
}
