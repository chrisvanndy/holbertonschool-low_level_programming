#include "holberton.h"
/**
 * print_rev - prints a given string in reverse
 * @s: s points to str we will reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, l;

	l = _strlen(s);
	i = l;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
/**
 * _strlen - determines characters in a string)
 * @s: s points to string
 *
 * Return: x
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	return (x);
}
