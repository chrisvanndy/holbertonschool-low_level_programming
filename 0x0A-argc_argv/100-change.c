#include <stdio.h>
#include <stdlib.h>
/**
 * main - arguments to determin coins necessary to make change
 * @argc: argc is number or args on comm line
 * @argv: array of components of argc
 * Return: int
 */
int main(int argc, char *argv[])
{
	int total = 0, cents = atoi(argv[argc - 1]);
	int quater, dime, nickel, deuce, penny;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cents > 0)
	{
		quater = cents / 25;
		dime = cents % 25 / 10;
		nickel = cents % 25 % 10 / 5;
		deuce = cents % 25 % 10 % 5 / 2;
		penny = cents % 25 % 10 % 5 % 2 / 1;

		total = quater + dime + nickel + deuce + penny;

		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
