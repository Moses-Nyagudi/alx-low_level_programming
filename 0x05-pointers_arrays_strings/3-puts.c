#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to a string (a null-terminated character array).
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}

		_putchar(str[i]);
	}
}
