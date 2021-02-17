#include "holberton.h"
/**
 * _puts - write a string via its array
 * @str: points to stored string
 *
 * Return: void
 */
void _puts(char *str)
{
	int inc;

	inc = 0;

	while (*(str + inc) != '\0')
	{
		_putchar(*(str + inc));
		inc++;

	}
	_putchar('\n');
}

