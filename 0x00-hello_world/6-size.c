#include <stdio.h>
/**
 * main - my function
 *
 * Describe: This function prints the size of various type specifiers
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %c/n", (char)sizeof(c));
	printf("Size of an int: %i\n", (int)sizeof(i));
	printf("Size of a long int: %li\n", (long int)sizeof(li));
	printf("Size of a long long int: %lli\n", (long long int)sizeof(lli);
	printf("Size of a float: %f\n", (float)sizeof(f);

	return (0);
}
