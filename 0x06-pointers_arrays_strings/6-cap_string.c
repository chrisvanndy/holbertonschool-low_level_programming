#include "holberton.h"
/**
 * cap_string - capitolaizes characters after certain values
 * @str: string of reference
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0, n;
	char sep[13] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


	while (str[i] != '\0')
	{
		for (n = 0; n < 13; n++)
		{
			if (str[i] == sep[n])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	i++;
	}
	return (str);
}


