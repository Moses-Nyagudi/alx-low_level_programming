# include "main.h"


/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to a string.
 */

void rev_string(char *s)
{
	if (s != NULL)
	{
		char *start = s;
		char *end = s;
		char temp;

		while (*end != '\0')
		{
			end++;
		}

		end--;

		while (start < end)
		{
			temp = *start;
			*start = *end;
			*end = temp;

			start++;
			end--;
		}
	}
}
