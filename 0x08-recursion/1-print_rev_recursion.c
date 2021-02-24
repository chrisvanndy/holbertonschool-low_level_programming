#include "holberton.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string given in main
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	else
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
