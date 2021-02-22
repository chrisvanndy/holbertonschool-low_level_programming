#include "holberton.h"
/**
 * _strspn - count of matching chars in string given f
 * @s: given string
 * @accept: chars to run compariosn
 * Return: count (c)
 */
	/*        variable s         f    */
unsigned int _strspn(char *s, char *accept)
{
	/* declare and define variables */
	int i, ii, c = 0;

	/* loop through string s  */
	for (i = 0; s[i] != ','; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
			{
				break;
			}
			if (!accept[ii + 1])
			{
				return (c);
			}
		}

	c++;
	}
	return (c);
}
