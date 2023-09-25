#include "main.h"

/**
 * _strpbrk - Locates the first occurrence
 * in the string s of any of the bytes in accept.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the first matching byte
 * in s, or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
