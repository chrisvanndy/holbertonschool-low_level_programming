#include "holberton.h"
/**
 * leet - puts # in desiganted char's place
 * @str: pointer to string source
 *
 * Return: string
 */
char *leet(char *str)
{
	int i = 0, n;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (str[i] != '\0')
	{
		for (n = 0; let[n] != '\0'; n++)
		{
			if (str[i] == let[n])
			{
				str[i] = num[n];
			}
		}
	i++;
	}
	return (str);
}
