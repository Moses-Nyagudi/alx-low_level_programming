#include "main.h"

/**
 * print_array - Prints n elements of an integer array followed by a new line.
 * @a: Pointer to an integer array.
 * @n: Number of elements to print.
 */

void print_array(int *a, int n)
{
	int i;

	if (a != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i < n - 1)
				printf(", ");
		}

		printf("\n");
	}
}
