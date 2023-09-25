#include "main.h"

/**
 * _strspn - Gets the length of a prefix
 * substring consisting of bytes from accept.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the characters to accept.
 *
 * Return: The number of bytes in the initial segment
 * of s that consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int match;

	int i;

	while (*s)
	{
		match = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				match = 1;

				break;
			}
		}

		if (!match)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);


}
