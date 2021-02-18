#include "holberton.h"
/**
 * string_toupper - turns lower to upper
 * @i: pinters to s
 * Return: void
 */
char *string_toupper(char *i)
{
	int n;
	n = 0;

	while (i[n] != '\0')
	{
		if (i[n] >= 'a' && i[n] <= 'z')
		{
			i[n] = i[n] - 32;
		}

		n++;
	}
	return (i);
}
