#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");
	return (0);
}
