#include "main.h"

/**
 * _strstr - Locates the first occurrence
 * of the substring needle in the string haystack.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the
 * located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *haystack_ptr = haystack;

		char *needle_ptr = needle;

		while (*needle_ptr && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
