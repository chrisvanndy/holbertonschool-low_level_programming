#include <stdio.h>

/**
 * main - adds two for loops
 * add all multiples of 3 and 5 under 1024
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int sum = 0;
	int sum2 = 0;

	for (a = 3; a < 1024; a += 3)
		sum += a;

	for (b = 5; b < 1024; b += 5)
		sum2 += b;

	printf("%d\n", sum + sum2);
	return (0);
}
