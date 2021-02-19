#include "holberton.h"
/**
 * rot13 - creates a cipher for rotating chars 13 places
 * @str: is the string we are ciphering
 *
 * Return: string
 */
char *rot13(char *str)
{
	int i = 0, n;
	char r[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char r2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP";

	while (str[i] != '\0')
	{
		for (n = 0; r[n] != '\0'; n++)
		{
			if (str[i] == r[n])
			{
				str[i] = r2[n];
					break;
			}	
		}
	i++;
	}
		return (str);
}
