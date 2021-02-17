#include "holberton.h"
/**
 * _strlen - function gives character length of a string
 * @s: s will pass through str in main
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

