#include "main.h"

/**
 * main - Entry point for the program.
 *
 * Description: This program generates a sequence of random characters
 *              and prints them to the standard output until a specified
 *              total value is reached.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));

	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
