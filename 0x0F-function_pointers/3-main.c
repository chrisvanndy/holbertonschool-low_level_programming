#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - determines function to use based on operator, and does math
 * @argc: number of arguments
 * @argv: string containing arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);
	int a, b;

	if (argc != 4)
	{
	printf("Error\n");
		exit(98);
	}

	fun = get_op_func(argv[2]);

	if (fun == NULL)
	{
	printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", fun(a, b));

	return (0);
}
