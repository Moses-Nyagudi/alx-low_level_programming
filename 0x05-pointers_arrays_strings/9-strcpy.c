#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	if (dest != NULL && src != NULL)
	{
		char *dest_start = dest;

		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}

		*dest = '\0';

		return (dest_start);
	}

	return (NULL);
}
