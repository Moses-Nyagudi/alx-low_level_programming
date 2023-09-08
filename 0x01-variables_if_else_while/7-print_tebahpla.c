#include <stdio.h>

/**
 * main - main entry point of the program
 * Description -  prints the alphabet in lowercase, followed by a new line.
 * return:0 exit point
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
