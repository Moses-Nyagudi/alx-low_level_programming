#include <stdio.h>

/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
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
