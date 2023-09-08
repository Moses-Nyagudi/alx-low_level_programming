#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - asigns a main block
 * Description - it determines if n is positive, negative or zero
 * Return:0 - gives a zero value if code executes correctly
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
