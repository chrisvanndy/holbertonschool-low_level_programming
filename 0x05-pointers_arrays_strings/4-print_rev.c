#include "holberton.h"
/**
 *
 *
 *
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

int _strlen(char *s)
{
        int x = 0;

        while ( *(s + x) != '\0')
        {
                x++;
        }

        return (x);
}

