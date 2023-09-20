#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string 'str'.
 */

char *cap_string(char *str)
{
	char *ptr = str;

	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ','
			 || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?'
			 || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}

		ptr++;
	}

	return (str);

}
