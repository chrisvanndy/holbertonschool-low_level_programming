#include <stdio.h>
/**
 * main - this is my function
 * this will print base 16 chars with for loops
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
	putchar (x);

	for (x = 'a'; x >= 'g'; x++)
	putchar (x);
	putchar ('\n');

	return (0);
}
