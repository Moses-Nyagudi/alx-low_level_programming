#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int diag1_sum = 0;

	int diag2_sum = 0;

	int i;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];

		diag2_sum += a[i * size + (size - 1 - i)];
	}

	 printf("%d, %d\n", diag1_sum, diag2_sum);
}
