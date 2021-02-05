#include <stdio.h>
/**
 * main - this is my function
 * While statement base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
{
	printf("%d", x);
	x = x + 1;
}
	putchar('\n');
	return (0);
}
