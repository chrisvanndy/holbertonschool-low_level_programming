#include <stdio.h>
/*
 * main - my function
 * reverse alphabet with for loop
 *
 * return: 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	putchar (x);
	putchar ('\n');
	return (0);
}
