#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to the newly
 *         allocated concatenated string.
 *         On failure, returns NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	int len_s1 = 0;

	int len_s2 = 0;

	int i;

	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	concatenated = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return (concatenated);
}
