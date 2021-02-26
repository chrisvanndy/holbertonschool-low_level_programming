#include <stdio.h>
/**
 * main - arguments
 * @argc: int of arguments on command line
 * @argv: array of arguments argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
