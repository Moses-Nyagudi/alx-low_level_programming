#include "main.h"

/**
 * print_chessboard - Prints the chessboard represented as a 2D array.
 * @a: Pointer to the 2D array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int i;

	int l;

	for (i = 0; i < 8; i++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[i][l]);
		}
		 _putchar('\n');
	}
}
