#include <stdio.h>
/**
 * task0 - function that prints its name
 * @argc: argc integer gives # of cmmd line args
 * @argv: argv is an array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
