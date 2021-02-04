#include <unistd.h>
/**
 * main - my function
 *
 * this program writes a quote to an error message
 * Return: 1
 */
int main(void)
{
	if (write(1, "This will be output to standard out\n", 36) != 36)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (-1);
}

	return (0);
}
