#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string
 * @str: The string to evaluate
 *
 * Return: The number of words
 */

int count_words(char *str)
{
	int is_space = 0, i;

	int word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			is_space = 0;
		else if (is_space == 0)
		{
			is_space = 1;
			word_count++;
		}
	}
	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: On success, returns a pointer to an array of strings (words).
 *         On failure, returns NULL.
 */

char **strtow(char *str)
{
	char **word_array, *temp_str;

	int i, word_index = 0, str_len = 0, num_words = 0;

	int char_count = 0, start = 0, end = 0;

	while (str[str_len])
		str_len++;

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);
	word_array = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (word_array == NULL)
		return (NULL);
	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_count)
			{
				end = i;
				temp_str = (char *)malloc(sizeof(char) * (char_count + 1));

				if (temp_str == NULL)
					return (NULL);
				while (start < end)
					*temp_str++ = str[start++];
				*temp_str = '\0';
				word_array[word_index] = temp_str - char_count;
				word_index++;
				char_count = 0;
			}
		}
		else if (char_count++ == 0)
			start = i;
	}
	word_array[word_index] = NULL;
	return (word_array);
}
