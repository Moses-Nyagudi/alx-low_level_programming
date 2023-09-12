#include "main.h"

/**
 * main - entry point of function.
 * Description: Print "_putchar" with custom header.
 * Return: 0
 */


/**
 * displayString - prints array contents
 */

void displayString(const char output[])
{
	int i = 0;

	while (output[i] != '\0')
	{
		_putchar(output[i]);
		i++;
	}
}

int main(void)
{
	char output[] = "_putchar";
	displayString(output);

	_putchar('\n');

	return (0);
}
