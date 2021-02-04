#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Main - my function
 *
 * This function shows a random number and writes if stmts
 * return 0
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	printf("Last digit of %d is %d and is greater than 5", n); 
	return (0);
}
