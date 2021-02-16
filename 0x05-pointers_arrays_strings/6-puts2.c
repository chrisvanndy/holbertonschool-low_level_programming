#include "holberton.h"
/**
 *
 *
 *
 */
void puts2(char *str)
{
        int l;

        l = 0;

        while (*(str + l) != '\0')
        {	
		
		if (*(str + l) %2 == 0)
		{
                _putchar(*(str + l));
		}
		l++;
        }
        _putchar('\n');
}

