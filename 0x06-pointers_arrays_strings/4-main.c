#include "main.h"

/**
 * print_array - Prints the elements of an integer array, separated by commas.
 * @a: The integer array to be printed.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an integer array 'a'
 * and the number of elements 'n'
 * and prints each element in the array.
 * The elements are separated by commas, and
 * a newline character is added at the end.
 * If the array is empty, only a newline
 * character is printed.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}

		printf("%d", a[i]);
		i++;
	}

	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));

	return (0);
}
