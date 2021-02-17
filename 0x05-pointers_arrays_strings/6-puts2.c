#include "holberton.h"
/**
 * puts2 - print every other index in an array
 * @str: points to value of string
 *
 * Return: void
 */
void puts2(char *str)
{
	int l;

	l = 0;

	while (*(str + l) != '\0')
	{
		if (*(str + l) % 2 == 0)
		{
		_putchar(*(str + l));
		}
		l++;
	}
	_putchar('\n');
}
