#include <unistd.h>
/**
 * main - my function
 *
 * this program writes a quote to an error message
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (0);
}

