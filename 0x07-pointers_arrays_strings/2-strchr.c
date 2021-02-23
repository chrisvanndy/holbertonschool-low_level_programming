#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - detects 'c' in S
 * @s: string
 * @c: character to test for in s
 * Return: void
 */
	/* main     s, hello    'l' */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);

		}
	}

	return (NULL);

}
