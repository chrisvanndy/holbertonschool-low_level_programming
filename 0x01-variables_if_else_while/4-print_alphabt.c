#include <stdio.h>
/**
 * main - my function prints alphabet without q or e
 * putchar and omit q,e
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'q' || c == 'e')
	continue;
	else
	putchar (c);
}
	putchar ('\n');
	return (0);
}
