#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 * using previous prototype to accomplish new
 *
 * Return: 0
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
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	print_alphabet();
	}
}
