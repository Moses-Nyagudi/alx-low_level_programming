#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: first character
 *
 * Return: 1 if true 0 oherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}


