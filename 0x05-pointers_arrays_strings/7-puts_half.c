#include "holberton.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int hflen;

	if (len %2 == 0)
	{
	hflen = (len) / 2;
	}
	else
	{
	hflen = (len + 1) / 2;  
	}
	for (; str[hflen] != '\0'; hflen ++)
	{
		_putchar(str[hflen]);
	}
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
