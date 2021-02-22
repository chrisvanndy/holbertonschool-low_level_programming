#include "holberton.h"
/**
 * _strpbrk - appends matching strings at first occurance of matching bytes
 * @s: string
 * @accept: matching string
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
		/* define and declare variables*/
		int i, ii;
		/* loop through string 1 */
		for (i = 0; s[i] != '\0'; i++)	
		{	
			for (ii = 0; accept[ii] != '\0'; ii++)
			{
		/* loop through given pattern string */
				if (s[i] == accept[ii])
				{
				  return (s + i);
				}
			}
		}	
	return (s);
			
}
