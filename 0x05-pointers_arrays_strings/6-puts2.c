#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to a string.
 */

void puts2(char *str)
{
	if (str != NULL)
	{
		int i;

		for (i =0; str[i] != '\0'; i++)
		{
			if (i % 2 == 0)
				putchar(str[i]);
		}

		putchar('\n');
	
	}
}
