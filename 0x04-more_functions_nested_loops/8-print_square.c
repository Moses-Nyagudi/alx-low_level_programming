#include "main.h"


/**
 * print_square - prints a square followed by a new line
 * @size: The size of the square
 */
void print_square(int size)
{
	int vertical;

	int horizontal;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (vertical = size ; vertical > 0 ; vertical--)
	{
		for (horizontal = size ; horizontal > 0 ; horizontal--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

