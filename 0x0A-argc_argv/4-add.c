#include <stdio.h>
#include <stdlib.h>
/**
 * main - arguments
 * @argc: int of arguments on comm line
 * @argv: array of elements from argc
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	printf("0\n");
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	}

	return (0);
}
