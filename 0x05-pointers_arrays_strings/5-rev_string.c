#include "holberton.h"
/**
 * rev_string - stores str in tmp varialbe, and reverses it
 * @s: s points to value of string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char len = _strlen(s);
	int i;
	int j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}
}
/**
 * _strlen - gives number of characters in a string
 * @s: s points to value of string
 *
 * Return: x
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	return (x);
}
