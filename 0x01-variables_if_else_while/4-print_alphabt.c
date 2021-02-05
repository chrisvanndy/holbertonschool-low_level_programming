#include <stdio.h>
/**
 * Main - this is my function
 * putchar and omit q,e
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'q' && c != 'e')
	putchar (c);
}
        putchar ('\n');
        return (0);
} 
