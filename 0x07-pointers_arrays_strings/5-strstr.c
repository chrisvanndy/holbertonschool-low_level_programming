#include "holberton.h"
/**
 * _strstr - string that prints only exact matching chars
 * @haystack: string given
 * @needle: string to compare
 * Return: 0
 */
		/* main      s             f */
char *_strstr(char *haystack, char *needle)
{
	int i, ii;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (ii = 0; needle[ii] != '\0'; ii++)
		{
			/* compare needle to haystack */
			if (haystack[i] != needle[ii])
			{
				break;
			}
			if (haystack[i] == needle[ii])
			{
				return (needle);
			}

		}	/* if match found return pointer to beginning of substring */
	}

	return (0);
/* return null if substring not found */
}
