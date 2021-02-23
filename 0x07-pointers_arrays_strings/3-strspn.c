#include "holberton.h"
/**
 * _strspn - search prefix string in given
 * @s: string given
 * @accept: prefix string given for search
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			c++;
			break;
			}
		}
	if (accept[j] == '\0')
	break;
	}
	return (c);
}

