#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string (a null-terminated character array).
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}

	return (length);
}
