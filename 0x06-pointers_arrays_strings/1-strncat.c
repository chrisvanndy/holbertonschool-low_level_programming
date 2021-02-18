#include "holberton.h"
/**
 * _strncat - cats 2 strings to a pointer
 * @dest: output of pointer to 2 strings
 * @src: source of string..?
 * @n: valude for bits into string to print
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *out = dest;
	char i = 0;

	if ((dest != '\0') && (src != '\0'))
	{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > i)
	{

		*dest = *src;
		src++;
		dest++;
		i++;
	}
	}
	return (out);
}
