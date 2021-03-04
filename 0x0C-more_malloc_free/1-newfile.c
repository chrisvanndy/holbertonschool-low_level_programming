#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns length of given string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
/**
 * string_nconcat - concatinate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * @n: passed  size limit for s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *ptr;
        unsigned int y = 0, x;

        if (n >= (unsigned int) _strlen(s2))
                n = (unsigned int) _strlen(s2);
        ptr = malloc((unsigned int) _strlen(s1) + n + 2);

        if (ptr == NULL)
                return (NULL);
        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        for (x = 0; s1[x] != '\0'; x++)
        {
                ptr[y] = s1[x];
                y++;
        }
        for (x = 0; x <= n; x++)
        {
                ptr[y] = s2[x];
                y++;
        }
        ptr[y] = '\0';

        return (ptr);
}

