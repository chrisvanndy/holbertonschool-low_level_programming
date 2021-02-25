#include "holberton.h"
/**
 * _strlen_recursion - determines lenghts of string
 * @s: is given string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * is_palindrome - uses string length and helper function to determing boolean
 * @s: given string to gauge lenght and if palindrome
 *
 * Return: helperfunc
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	len--;

	return (helperfunc(s, len, 0));
}
/**
 * helperfunc - is helper function using local variable from prototype
 * @s: given string to analyze
 * @len: local variable from is_palindrom used to dec from end of string.
 * @i: variable used to iterate from beginning for string
 * Return: int
 */
int helperfunc(char *s, int len, int i)
{
	if (s[len] != s[i])
	{
		return (0);
	}
	if (*s == '\0')
	{
		return (0);
	}
	else if (len > i)
	{
		return (helperfunc(s, len - 1, i + 1));
	}
	return (1);
}
