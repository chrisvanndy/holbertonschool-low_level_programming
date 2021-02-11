#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, n, t1 = 1, t2 = 2, next;

	for (i = 1; i <= 50; i++)
	{
	printf("%d, ", t1);
	next = t1 + t2;
	t1 = t2;
	t2 = next;
	}
	printf("\n");
	return (0);
}
