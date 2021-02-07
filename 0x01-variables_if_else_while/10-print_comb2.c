#include <stdio.h>
/**
 * main - my function
 * numbers 00 - 99
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
