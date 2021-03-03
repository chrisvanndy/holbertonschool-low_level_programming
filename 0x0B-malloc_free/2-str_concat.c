#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns length of given string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, ii, sz1 = 0, sz2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);

	s = (char *) malloc(sz1 + sz2 + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (ii = 0; s2[ii] != '\0'; ii++)
	{
		s[i] = s2[ii];
		i++;
	}

	s[i] = '\0';
	return (s);
}
