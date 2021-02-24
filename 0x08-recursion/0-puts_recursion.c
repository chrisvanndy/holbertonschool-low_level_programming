#include "holberton.h"
/**
 * _puts_recursion - prints string
 * @s: string being passed (local to main)
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}