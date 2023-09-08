#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  main - entry point of the program
 *  Description - print the last digit of the number stored in the variable
 *  Return:0 exit point of the program
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("The Last digit of %d is %d and it is greater than 5\n", n, m);
	else if (m == 0)
		printf("The Last digit of %d is %d and it 0\n", n, m);
	else
		printf("The Last digit of %d is %d and it is less than 6 and not 0\n", n, m);
	return (0);
}
