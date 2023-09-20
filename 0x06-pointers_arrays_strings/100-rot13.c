#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the modified string 's'.
 */

char *rot13(char *s)
{
	char *ptr = s;

	char *rot13_lowercase = "nopqrstuvwxyzabcdefghijklm";

	char *rot13_uppercase = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr)
	{
		int index;

		if (*ptr >= 'a' && *ptr <= 'z')
		{
			index = *ptr - 'a';
			*ptr = rot13_lowercase[index];
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			index = *ptr - 'A';
			*ptr = rot13_uppercase[index];
		}

		ptr++;
	}

	return (s);
}
