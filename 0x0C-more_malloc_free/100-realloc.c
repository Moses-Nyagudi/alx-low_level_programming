#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: Size of the allocated space in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: A pointer to the newly allocated memory block.
 *         NULL if new_size is 0 and ptr is not NULL.
 *         NULL if malloc fails.
 *         The pointer ptr if new_size is equal to old_size or if ptr is NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
