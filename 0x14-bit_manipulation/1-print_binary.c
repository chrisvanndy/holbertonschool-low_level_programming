#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - takes arg of uli and turns to binary
 * @n: given intput
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
