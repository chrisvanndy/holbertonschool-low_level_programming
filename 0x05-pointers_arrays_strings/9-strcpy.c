#include "holberton.h"
/**
 * _strcpy - copies string to dest (p)
 * @dest: pointer to p
 * @src: pointer to s1
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * _strlen - determines characters in a string)
 * @s: s points to string
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
