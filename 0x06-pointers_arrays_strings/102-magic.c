#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function initializes variables and prints "a[2] = 98".
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	int a[5];

	int *p;

	a[2] = 1024;
	p = &n;
	n = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}

