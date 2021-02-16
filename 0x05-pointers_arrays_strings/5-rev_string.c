#include "holberton.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	char len = _strlen(s)
	int i, j=0

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
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
