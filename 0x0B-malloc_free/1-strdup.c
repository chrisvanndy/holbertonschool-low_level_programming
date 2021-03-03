#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of string
 * @s: string
 * Return: integer
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
 * _strdup - copies string into a pointer to a string
 * @str: string being copied into pointer to string
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i;

	char *s;

	if (str == NULL)
		return (NULL);

	s = (char *) malloc(_strlen(str) * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}

	s[i] = '\0';
	return (s);
}
