#include <stdio.h>
/**
 * main - arguments
 * @argc: int counts number of args on command line
 * @argv: array of arguments in command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
