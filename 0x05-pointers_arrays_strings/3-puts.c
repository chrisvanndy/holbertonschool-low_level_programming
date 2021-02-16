#include "holberton.h"
/**
 *
 *
 *
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

