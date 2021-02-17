#include "holberton.h"
/**
 * print_rev - prints a given string in reverse
 * @s: s points to str we will reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	l = _strlen(s);

	while ( l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
_putchar('\n');
}
int _strlen(char *s)
{
        int x = 0;

        while (*(s + x) != '\0')
        {
                x++;
        }

        return (x);
}



