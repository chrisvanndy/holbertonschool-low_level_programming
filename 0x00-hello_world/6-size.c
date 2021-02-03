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

	printf("Size of a char: %lu byte (s)\n", (char)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (int)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (long int)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (long long int)sizeof(lli);
	printf("Size of a float: %lu byte(s)\n", (float)sizeof(f);

	return (0);
}

