#include "holberton.h"
/**
 * _strchr - function prints string after 'c'
 * @s: string given
 * @c: character given to indicate
 * Return: string at c or null
 */
/* from main -char s,   'l' */
char *_strchr(char *s, char c)
{
	/* define or declare variables */
	int i;
	/* return a pointer to first occurance of 'l' in s */
	/* loop through s */
	for (i = 0; s[i] != '\0'; i++)
	{
	/* if the char 'l' occurs*/
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	/* return '\0' if 'char' not found */
	return ('\0');
}
