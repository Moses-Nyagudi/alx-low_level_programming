#include <stdio.h>

/**
 * main - prints the alphabet in lowercase & uppercase
 * followed by a new line.
 * return:0 exit point
 */

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);
	putchar('\n');

	return (0);
}
