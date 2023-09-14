#include "main.h"

/**
 * print_triangle - print a triangle at a given size.
 * @size: size of triangle to print.
 */
void print_triangle(int size)
{
	/**
	 * int i: for iteration in for loop also used as a way to subtract.
	 * int margin: will record the amount of whitespace I'll need to print.
	 * int dis"tance": is used to offset size.
	 * int to_print: is used to tell how many '#' will
	 * need to be printed per-line.
	 */

	int i;

	int margin;

	int dis;

	int to_print;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	dis = size - 1;
	for (i = 0; i < size; i++)
	{
		margin = 0;
		while (margin < (dis - i))
		{
			_putchar(32);
			margin++;
		}
		to_print = size - margin;
		while (to_print > 0)
		{
			_putchar('#');
			to_print--;
		}
		_putchar('\n');
	}
}
