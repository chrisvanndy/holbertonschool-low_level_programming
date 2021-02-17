#include "holberton.h"
/**
 * puts_half - prints second half of a string
 * @str: points to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int hflen;

	if (len % 2 == 0)
	{
	hflen = (len) / 2;
	}
	else
	{
	hflen = (len + 1) / 2;
	}
	for (; str[hflen] != '\0'; hflen++)
	{
		_putchar(str[hflen]);
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
