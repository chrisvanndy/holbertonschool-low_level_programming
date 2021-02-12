#include <stdio.h>
/**
 * main  - print fizz, buzz, and fizzbuzz in place of numbers
 *
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}

	printf("\n");
}

