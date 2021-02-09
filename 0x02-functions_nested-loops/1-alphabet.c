#include "holberton.h"
/**
 * print_alphabet - prototyping function to write alphabet
 * incrament a to z / print new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
