#include "holberton.h"
/**
 * _strcat - cats 2 strings to a pointer
 * @dest: output of pointer to 2 strings
 * @src: source of string..?
 *
 * Return: pointer to :xdest
 */
char *_strcat(char *dest, char *src)
{
	char *out = dest;

	if ((dest != '\0') && (src != '\0'))
	{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	}
	return (out);
}
